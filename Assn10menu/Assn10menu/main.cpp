#include <iostream>
#include <conio.h>

using namespace std;
//Program: enter 2 numeric values, and offer a selection menu to determine calcultion done.

void main()
{
	//variables
	int  menu = -1;
	float num1, num2, total;
	cout << "Program will accept two numbers and then Evaluate them as determined with the menu input" << endl;
	//loop as long as quit variable not entered.
	while (menu != 6)
	{
		//start of prgram reset(only if quit is not chosen)
		menu =-1;
		//inputs 
		cout << "Please input the first number(intger X):" ;
		cin >> num1;
		cout << "Please input the second number(intger Y):" ;
		cin >> num2;
		//program explanation to user
		cout << endl << "Please Select an option from the list -- Input a number to make a selction";
		cout << endl << "Option 1 - Add.  X+Y=";
		cout << endl << "Option 2 - Subtract.  X-Y=";
		cout << endl << "Option 3 - Multiply.  X*Y=";
		cout << endl << "Option 4 - Divide.  X/Y=";
		cout << endl << "Option 5 - Average. (X+Y)/2=";
		cout << endl << "Option 6 - Quit Program.";
		//validate menu input
		//calculate if valid
		while (menu < 1 || menu > 6)
		{
			cin >> menu;
			if (menu !=1 && menu !=2 && menu !=3 && menu !=4 && menu !=5 && menu !=6)
			{
				cout << "Input Invalid. Please try again.";
			}
			else
			{
				switch(menu)
				{
				case 1:
					total = num1 + num2;
					break;
				case 2:
					total = num1 - num2;
					break;
				case 3:
					total = num1 * num2;
					break;
				case 4:
					total = num1 / num2;
					break;
				case 5:
					total = (num1+num2)/2;
					break;
				default:
					break;
				}
			}
		}
		//output final answer
		cout << endl << "Your final total is... " << total << endl << endl;
	}
}