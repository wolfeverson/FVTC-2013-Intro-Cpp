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
void debug(string message);
void draw();


draw()
{
	//draw methods from class go here.

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
	//WASD & arrows & space
   //user interaction here
	switch(key)
	{
	case 'a':
		viewer[0] -= 0.5f;
		break;
	case 'i':
		light_one[2] += 3.5f;
		break;
	case 'm':
		light_one[2] -= 3.5f;
		break;
	}
	glutPostRedisplay();
	writeMessage(" this is txt.");
}

//output in initial console
void writeMessage(string)
{
   //any control instructions go here
	//This is the only command line box output.
   cout << "OpenGL Demo" << endl;
   cout << string << endl;
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