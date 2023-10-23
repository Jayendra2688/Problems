from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *

x, y = map(float, input("Enter Fixed Points (x,y) for Rotation: \n").split())
where_to_rotate = 0
rotate_angle = 0
translate_x = 0
translate_y = 0

def draw_pixel(x1, y1):
    glPointSize(5)
    glBegin(GL_POINTS)
    glVertex2f(x1, y1)
    glEnd()

def triangle(x, y):
    glColor3f(1, 0, 0)
    glBegin(GL_POLYGON)
    glVertex2f(x, y)
    glVertex2f(x+1, y+0.5)
    glVertex2f(x+0.5, y+0)
    glEnd()

def display():
    global where_to_rotate, rotate_angle, translate_x, translate_y
    glClear(GL_COLOR_BUFFER_BIT)
    glLoadIdentity()
    glColor3f(1, 1, 1)
    draw_pixel(0, 0)

    if where_to_rotate == 1:
        translate_x = 0
        translate_y = 0
        rotate_angle += 1

    if where_to_rotate == 2:
        translate_x = x
        translate_y = y
        rotate_angle += 1
        glColor3f(0, 0, 1)
        draw_pixel(x, y)

    glTranslatef(translate_x, translate_y, 0)
    glRotatef(rotate_angle, 0, 0, 1)
    glTranslatef(-translate_x, -translate_y, 0)
    triangle(translate_x, translate_y)

    glutPostRedisplay()
    glutSwapBuffers()

def init():
    glClearColor(0.0, 0.0, 0.0, 1.0)
    gluOrtho2D(0.0, 800.0, 0.0, 800.0)

def rotateMenu(option):
    global where_to_rotate
    if option == 1:
        where_to_rotate = 1
    if option == 2:
        where_to_rotate = 2
    if option == 3:
        where_to_rotate = 3
def main():
    glutInit()
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB)
    glutInitWindowSize(1800, 1800)
    glutInitWindowPosition(0,0)
    glutCreateWindow(b"Create and Rotate Triangle")
    glutDisplayFunc(display)
    glutCreateMenu(rotateMenu)
    glutAddMenuEntry(b"Rotate around ORIGIN",1)
    glutAddMenuEntry(b"Rotate around FIXED POINT",2)
    glutAddMenuEntry(b"Stop Rotation",3)
    glutAttachMenu(GLUT_RIGHT_BUTTON)
    init()
    glutMainLoop()

main()