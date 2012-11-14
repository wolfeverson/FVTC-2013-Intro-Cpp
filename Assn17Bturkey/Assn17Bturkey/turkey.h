#include <iostream>
#include <string>
using namespace std;

class turkey
{
private:
	int _size;
public:
	turkey();
	turkey(int size);
	friend ostream& operator<<(ostream&, const turkey&);
};