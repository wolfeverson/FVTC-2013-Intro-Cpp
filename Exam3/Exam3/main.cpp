#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

//Write a C++ program that will ask for N numbers to be put into a 1 dimensional integer array, where N is an integer value also input by the user.  
//
//Your program will 
//	store these numbers in an array 
//	calculate and display the total, 
//	and display the numbers in reverse order.
//
//Be sure to include appropriate comments and output to the end user to explain the functionality of the program.
//
//Extra Credit (up to 10 points) Write these numbers (using the same formatting) out to a text file. 

void main()
{
	int input, total = 0;
	cout << "How many numbers would you like your array to be?";
	cin >> input;
	int *numbers = new int[input];
	for (int i = 0; i < input; i++)
	{
		cout << "Please input Integer #" << i << endl;
		cin >> numbers[i];
		total += numbers[i];
	}
	cout << endl << "The numbers in reverse order are: " << endl;
	for (int i = input-1; i >= 0; i--)
	{
		cout << numbers[i] << endl;
	}
	cout << endl << "Your total is: " << total;

	ofstream file1;
	file1.open("examfile.txt");
	file1 << endl << "The numbers in reverse order are: " << endl;
	for (int i = input-1; i >= 0; i--)
	{
		file1 << numbers[i] << endl;
	}
	file1 << endl << "Your total is: " << total;
	file1.close();
	getch();
}