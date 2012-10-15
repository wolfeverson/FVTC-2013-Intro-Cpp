#include <iostream>
#include <conio.h>
using namespace std;
//use multi-dimensional arrays to store and calculate data.
void main()
{
	//cube array.
	int arrnumbers[3][2][3] = 
	{
		{
			{16, 18, 23},
			{54, 91, 11}
		},
		{
			{14, 52, 77},
			{16, 19, 59}
		}
	};
	//calculating "third" array
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arrnumbers[2][i][j] = arrnumbers[0][i][j] + arrnumbers[1][i][j];
		}
	}
	//output
	for (int i = 0; i < 3; i++)
	{
		cout << "Array " << i+1 << ": " << endl;
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << arrnumbers[i][j][k] << " ";
			}
			cout << endl; 
		}
	}
getch();
}