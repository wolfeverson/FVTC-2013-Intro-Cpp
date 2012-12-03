#include <glut.h>
using namespace std;

class triangle
{
private:
	GLfloat _x1, _x2, _x3, _y1, _y2, _y3;
	GLfloat *_color;
public:
	triangle();
	triangle(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
	void draw();
	void setColor(GLfloat);  //??

};