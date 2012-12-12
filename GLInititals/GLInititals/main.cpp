#include <iostream>
#include <glut.h>
#include "triangle.h"
using namespace std;
//https://github.com/thejoebaldwin/c-plus-plus-opengl/blob/master/HelloTriangle/main.cpp

void writeMessage();
void init();
void reshape(int, int);
void display();
void keyboard(unsigned char, int, int);
void draw();
//position of light
static GLfloat light_one[] = {5.5, 0.0, 5.0, 1.0};
// position of viewer 
static GLdouble viewer[] = {0.0, -2.0, 20.0}; 



triangle o1(-2,5,-5,4,-2,4);



void draw()
{
	o1.draw();


}


void display()
{
   /*start boiler*/
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glLoadIdentity(); 
   //set camera direction and position
   gluLookAt(viewer[0], viewer[1], viewer[2], 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
   //draw light source
   glLightfv(GL_LIGHT0, GL_POSITION, light_one);
   /*end boiler*/

   //draw
   draw();
   
   /*start boiler*/
   glFlush();
   glutSwapBuffers();
   /*end boiler*/
}

void keyboard(unsigned char key, int x, int y)
{

   //user interaction here
	switch(key)
	{
	case 'a':
		viewer[0] -= 0.5f;
		break;
	case 'd':
		viewer[0] += 0.5f;
		break;
	case 'w':
		viewer[1] += 0.5f;
		break;
	case 's':
		viewer[1] -= 0.5f;
		break;
	case 'q':
		viewer[2] -= 0.5f;
		break;
	case 'e':
		viewer[2] += 0.5f;
		break;
	case 'j':
		light_one[1] -= 3.5f;
		break;
	case 'k':
		light_one[1] += 3.5f;
		break;
	case 'i':
		light_one[2] += 3.5f;
		break;
	case 'm':
		light_one[2] -= 3.5f;
		break;
	}
	glutPostRedisplay();
	debug("");
}

//output in initial console
void writeMessage()
{
   //any control instructions go here
	//This is the only command line box output.
   cout << "OpenGL Demo" << endl;
}

//allows for resizing
void reshape(int w, int h)
{
   glViewport(0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluPerspective(45.0, (GLfloat) w / (GLfloat) h, 2.0, 100.0);
   glMatrixMode(GL_MODELVIEW);
}


void init() 
{
   writeMessage(); 
   //"Background" color = white
   glClearColor(1.0, 1.0, 1.0, 1.0);
   glShadeModel(GL_SMOOTH);
   glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
   /* GL_FILL, GL_LINE to show wireframe */
   glEnable(GL_DEPTH_TEST);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
}

void main(int argc, char** argv)
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
