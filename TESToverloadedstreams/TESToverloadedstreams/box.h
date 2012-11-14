#include <iostream>
using namespace std;

class box
{
private:
int _size;

public:
	box();
	box(int size);
	void setSize(int size);
	string toString();
	friend ostream& operator<<(ostream&, const box&);
};