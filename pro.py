import pygame
import sys

# Initialize Pygame
pygame.init()

# Define colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)
PURPLE = (128, 0, 128)

# Set up screen
screen_width, screen_height = 800, 600
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Pentagon Boundary Fill")

# Initialize variables
pentagon_points = []
drawing = True

def draw_pentagon(points):
    pygame.draw.polygon(screen, RED, points, 0)
    pygame.display.flip()

def boundary_fill(x, y, boundary_color, fill_color):
    if screen.get_at((x, y)) != boundary_color and screen.get_at((x, y)) != fill_color:
        screen.set_at((x, y), fill_color)
        boundary_fill(x + 1, y, boundary_color, fill_color)
        boundary_fill(x - 1, y, boundary_color, fill_color)
        boundary_fill(x, y + 1, boundary_color, fill_color)
        boundary_fill(x, y - 1, boundary_color, fill_color)

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
            if event.key == pygame.K_b and not drawing:
                # Perform boundary fill
                fill_x, fill_y = pentagon_points[0]
                boundary_color = BLACK  # Change to the boundary color if needed
                fill_color = RED
                boundary_fill(fill_x, fill_y, boundary_color, fill_color)
                pygame.display.flip()