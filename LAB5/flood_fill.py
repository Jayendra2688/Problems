import pygame
import sys

# Initialize Pygame
pygame.init()

# Define colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)

# Set up screen
screen_width, screen_height = 800, 600
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Pentagon Fill")

# Initialize variables
pentagon_points = []
drawing = True

def draw_pentagon(points):
    pygame.draw.polygon(screen, RED, points, 0)
    pygame.display.flip()

def flood_fill(x, y, target_color, fill_color):
    stack = [(x, y)]

    while stack:
        x, y = stack.pop()
        if screen.get_at((x, y)) == target_color:
            screen.set_at((x, y), fill_color)
            stack.append((x + 1, y))
            stack.append((x - 1, y))
            stack.append((x, y + 1))
            stack.append((x, y - 1))

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        elif event.type == pygame.MOUSEBUTTONDOWN and drawing:
            x, y = event.pos
            pentagon_points.append((x, y))
            if len(pentagon_points) == 5:
                draw_pentagon(pentagon_points)
                drawing = False
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_f and not drawing:
                # Perform flood fill
                fill_x, fill_y = pentagon_points[0]
                target_color = WHITE  # Change to the background color if needed
                fill_color = RED
                flood_fill(fill_x, fill_y, target_color, fill_color)
                pygame.display.flip()