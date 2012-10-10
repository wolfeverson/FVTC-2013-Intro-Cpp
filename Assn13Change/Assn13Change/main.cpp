#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
double makechange(double purchase, int &five, int &one, int &quarter, int &dime, int &nickel, int &penny);
//program will input dollar amount and determine(if given a 10$ bill) how much change is needed.
void main()
{
	double purchase = 0, change;
	int five = 0, one = 0, quarter = 0, dime = 0, nickel = 0, penny = 0;
	//loops to force valid input.
	do 
	{
		cout << "Please enter the cost of item(under 10.00$)";
		cin >> purchase;
		if (purchase <= 0 || purchase >= 10) cout << "Purchase amount invalid.  Try Again" << endl;
	}
	while (purchase <= 0 || purchase >= 10);
	//function call to make change
	change = makechange(purchase, five, one, quarter, dime, nickel, penny);
	cout << endl;
	//output to user
	cout << "Total Change Needed: " << change << " for a $" << purchase << " purchase." << endl;
	cout << "Amount of pieces to make change for a 10$" << endl;
	cout << "5$: " << five << endl;
	cout << "1$: " << one <<endl;
	cout << "Quarter: " << quarter << endl;
	cout << "Dime: " << dime << endl;
	cout << "Nickel: " << nickel << endl;
	cout << "Penny: " << penny << endl;
	getch();
}

double makechange(double purchase, int &five, int &one, int &quarter, int &dime, int &nickel, int &penny)
{
	
	double returnchange = (10.00 - purchase);
	//working pennies as whole numbers to ease calculations
	//truncates any decimal smaller than penny.
	int change = returnchange * 100;
	five = change / 500;
	change = change % 500;
	one = change / 100;
	change = change % 100;
	quarter = change /25;
	change = change % 25;
	dime = change /10;
	change = change % 10;
	nickel = change /5;
	change = change % 5;
	penny = change;
	return returnchange;
}
