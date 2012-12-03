#include <iostream>
#include <glut.h>
#include "triangle.h"
#include <random>
#include <Windows.h>
#include <WinBase.h>
using namespace std;


	triangle::triangle()
	{
		//should not be used?
		_x1 = 0;
		_x2 = 0;
		_x3 = 0;
		_y1 = 0;
		_y2 = 0;
		_y3 = 0;
	}

	triangle::triangle(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3)
	{
		_x1 = x1;
		_x2 = x2;
		_x3 = x3;
		_y1 = y1;
		_y2 = y2;
		_y3 = y3;
		//generates color shade with RGB values all equal
		//color range is .25 to .75
		
		getsystemtimeasfiletime();







		int randnum = rand()%50+26;
		GLfloat shade = (double)randnum/100;
		_color = new GLfloat[4];
		_color[0] = shade;
		_color[1] = shade;
		_color[2] = shade;
		_color[3] = .99;
	}

	void triangle::draw()
	{
	glBegin(GL_TRIANGLES);
		glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, _color);
		glVertex3f(_x1, _y1, 0.1);
		glVertex3f(_x2, _y2, 0.1);
		glVertex3f(_x3, _y3, 0.1);
	glEnd();
	
	glBegin(GL_QUADS);
		glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, _color);
		glVertex3f(_x1, _y1, 0.1);
		glVertex3f(_x1, _y1, -4.0);
		glVertex3f(_x3, _y3, -4.0);
		glVertex3f(_x3, _y3, 0.1);
	glEnd();

	glBegin(GL_QUADS);
		glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, _color);
		glVertex3f(_x3, _y3, 0.1);
		glVertex3f(_x3, _y3, -4.0);
		glVertex3f(_x2, _y2, -4.0);
		glVertex3f(_x2, _y2, 0.1);
	glEnd();

	glBegin(GL_QUADS);
		glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, _color);
		glVertex3f(_x1, _y1, 0.1);
		glVertex3f(_x2, _y2, 0.1);
		glVertex3f(_x2, _y2, -4.0);
		glVertex3f(_x1, _y1, -4.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, _color);
		glVertex3f(_x1, _y1, -4.0);
		glVertex3f(_x2, _y2, -4.0);
		glVertex3f(_x3, _y3, -4.0);
	glEnd();
	}

	void setColor(GLfloat)
	{



	}