#include <iostream>
#include <conio.h>
using namespace std;
//program uses nested for loops to create a star pattern.

void main()
{
	for (int x = 1; x < 11; x++)//lines
	{
			//1
			for (int i=0; i < x; i++) cout << '*';
			for (int i=0; i < (10 - x); i++) cout << ' ';
			cout << ' ';
			//2
			for (int i=0; i < (11 - x); i++) cout << '*';
			for (int i=0; i < (x - 1); i++) cout << ' ';
			cout << ' ';
			//3
			for (int i=0; i < (x - 1); i++) cout << ' ';
			for (int i=0; i < (11 - x); i++) cout << '*';
			cout << ' ';
			//4
			for (int i=0; i < (10 - x); i++) cout << ' ';
			for (int i=0; i < x; i++) cout << '*';
			cout << ' ';
			cout << endl;
	}
	cout << "\n\n\n\n\nPress any key to close.";
	getch();
}