#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
//program takes pre-set variables and outputs in columnar format
int main()
{
	//declare variables for grades
	float score1 = 21, score2 = 22, score3 = 05;
	//declare column size
	int width1 = 20, width2 = 10;
	int widthtotal = width1 + width2;
	//calculate average
	float average = (score1 + score2 + score3)/3;
	//setting output stream to fixed settings
	cout << fixed << setprecision(0);
	//output?
	cout << left << setw(width1) << "Assignment" << right <<  setw(width2) <<"Grade";
	for (int i=0, i < widthtotal, i++)
	{
		cout << "-";
	}
	cout << left << setw(width1) << "\nHello World!" << right <<  setw(width2) << score1 << "%";
	cout << left << setw(width1) << "\nMiles Calculator" << right <<  setw(width2) << score2 << "%";
	cout << left << setw(width1) << "\nAssn3" << right <<  setw(width2) << score3 << "%";
	for (int i=0, i < widthtotal, i++)
	{
		cout << "-";
	}
	cout << left << setw(width1) << "\nAverage" << right <<  setw(width2) << average << "%";

	
	getch();
	return 0;
}