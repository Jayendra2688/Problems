#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>

// Define the cities and their coordinates as (x, y) pairs
std::vector<std::pair<int, int>> cities = {{0, 0}, {1, 2}, {3, 1}, {5, 2}, {6, 0}};

// GA parameters
const int population_size = 50;
const int num_generations = 100;
const double crossover_rate = 0.7;
const double mutation_rate = 0.2;

// Function to calculate the total distance of a route
double calculate_total_distance(const std::vector<int>& route) {
    double total_distance = 0;
    for (int i = 0; i < route.size() - 1; ++i) {
        int x1 = cities[route[i]].first;
        int y1 = cities[route[i]].second;
        int x2 = cities[route[i + 1]].first;
        int y2 = cities[route[i + 1]].second;
        total_distance += std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    }
    return total_distance;
}

// Function to perform ordered crossover (OX) on two parent routes
std::pair<std::vector<int>, std::vector<int>> crossover(const std::vector<int>& parent1, const std::vector<int>& parent2) {
    int num_cities = parent1.size();
    int pos1 = std::rand() % num_cities;
    int pos2 = std::rand() % num_cities;
    if (pos1 > pos2) {
        std::swap(pos1, pos2);
    }

    std::vector<int> child1(num_cities, -1);
    std::vector<int> child2(num_cities, -1);

    // Copy the segment between pos1 and pos2 from parent1 to child1 and from parent2 to child2
    for (int i = pos1; i <= pos2; ++i) {
        child1[i] = parent1[i];
        child2[i] = parent2[i];
    }

    // Fill in the remaining positions with genes from parent2 for child1 and from parent1 for child2
    int pointer1 = 0;
    int pointer2 = 0;

    for (int i = 0; i < num_cities; ++i) {
        if (pointer1 < pos1 || pointer1 > pos2) {
            while (std::find(child1.begin(), child1.end(), parent2[pointer2]) != child1.end()) {
                pointer2++;
            }
            child1[pointer1] = parent2[pointer2];
            pointer1++;
        }

        if (pointer2 < pos1 || pointer2 > pos2) {
            while (std::find(child2.begin(), child2.end(), parent1[pointer1]) != child2.end()) {
                pointer1++;
            }
            child2[pointer2] = parent1[pointer1];
            pointer2++;
        }
    }

    return std::make_pair(child1, child2);
}

// Function to perform mutation on a route
void mutate(std::vector<int>& route) {
    int pos1 = std::rand() % route.size();
    int pos2 = std::rand() % route.size();
    std::swap(route[pos1], route[pos2]);
}

// Function to initialize the population with random routes
std::vector<std::vector<int>> initialize_population(int population_size) {
    int num_cities = cities.size();
    std::vector<std::vector<int>> population;
    for (int i = 0; i < population_size; ++i) {
        std::vector<int> route(num_cities);
        for (int j = 0; j < num_cities; ++j) {
            route[j] = j;
        }
        std::random_shuffle(route.begin(), route.end());
        population.push_back(route);
    }
    return population;
}

// Genetic algorithm main loop
void genetic_algorithm_TSP() {
    std::vector<std::vector<int>> population = initialize_population(population_size);
    
    for (int generation = 0; generation < num_generations; ++generation) {
        std::sort(population.begin(), population.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return calculate_total_distance(a) < calculate_total_distance(b);
        });
        std::vector<int> best_route = population[0];
        std::cout << "Generation " << generation << ": Best Distance = " << calculate_total_distance(best_route) << std::endl;
        
        int mating_pool_size = static_cast<int>(population_size * crossover_rate);
        std::vector<std::vector<int>> mating_pool(population.begin(), population.begin() + mating_pool_size);
        std::vector<std::vector<int>> offspring;
        
        while (offspring.size() < population_size) {
            int parent1_index = std::rand() % mating_pool_size;
            int parent2_index = std::rand() % mating_pool_size;
            std::pair<std::vector<int>, std::vector<int>> children = crossover(mating_pool[parent1_index], mating_pool[parent2_index]);
            if (static_cast<double>(std::rand()) / RAND_MAX < mutation_rate) {
                mutate(children.first);
            }
            if (static_cast<double>(std::rand()) / RAND_MAX < mutation_rate) {
                mutate(children.second);
            }
            offspring.push_back(children.first);
            offspring.push_back(children.second);
        }
        
        population = offspring;
    }
    
    std::vector<int> best_route = population[0];
    std::cout << "Best Route: ";
    for (int city : best_route) {
        std::cout << city << " ";
    }
    std::cout << std::endl;
    std::cout << "Best Distance: " << calculate_total_distance(best_route) << std::endl;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    genetic_algorithm_TSP();
    return 0;
}