import pygame
import math
from pygame.locals import *
from OpenGL.GL import *
from OpenGL.GLU import *

chair_vertices = (
    (0.5, 0, 0),
    (0, 0.5, 0),
    (0.5, 0.5, 0),
    (0, 0, 0),
    (0.5, 1.3, 0)
)

chair_edges = (
    (1, 3),
    (0, 2),
    (2, 4),
    (1, 2),
)

table_vertices = (
    (-1.6, 0, 0),
    (-1.6, 0.7, 0),
    (-0.45, 0.7, 0),
    (-0.45, 0, 0),
)

table_edges = (
    (0, 1),
    (1, 2),
    (2, 3),
)

def Chair():
    glColor3f(0.0, 0.0, 1.0)  # Blue color
    glLineWidth(10.0)
    glBegin(GL_LINES)
    for edge in chair_edges:
        for vertex in edge:
            glVertex3fv(chair_vertices[vertex])
    glEnd()

def Table():
    glColor3f(0.6, 0.4, 0.2) #brown color
    glLineWidth(10.0)
    glBegin(GL_LINES)
    for edge in table_edges:
        for vertex in edge:
            glVertex3fv(table_vertices[vertex])
    glEnd()

def main():
    pygame.init()
    display = (800, 600)
    pygame.display.set_mode(display, DOUBLEBUF|OPENGL)
    gluOrtho2D(-4, 4, -3, 3)

    angle = 0
    translation = 0

    movetable = False

    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                quit()

        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT)

        glPushMatrix()
        glTranslatef(translation, 0, 0)
        Table()
        glPopMatrix()

        glPushMatrix()
        glRotatef(angle, 0, 0, 1)
        Chair()
        glPopMatrix()

        pygame.display.flip()
        pygame.time.wait(10)

        if angle <= 72:
            angle += 0.5

        if angle == 55:
            movetable = True

        if translation >= -0.40 and movetable == True:
            translation -= 0.005

main()