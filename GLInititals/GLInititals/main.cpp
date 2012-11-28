#include <math.h>
#include <stdio.h>
#include <iostream>
#include <glut.h>
#include "triangle.h"
using namespace std;

static GLfloat white[] = {1.0,1.0,1.0,1.0};
static GLfloat color[] = {0.9,0.8,0.7,1.0};
//https://github.com/thejoebaldwin/c-plus-plus-opengl/blob/master/HelloTriangle/main.cpp
void main()
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize(800, 600); 
   glutInitWindowPosition(50, 50);
   glutCreateWindow(argv[0]);
   init();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape); 
   glutKeyboardFunc(keyboard);
   glutMainLoop();
}