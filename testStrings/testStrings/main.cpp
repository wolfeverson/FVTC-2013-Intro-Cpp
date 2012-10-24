#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

void main()
{
	string won, too, tree;
	won = "one";
	too  =  "too";
	tree = "tree";
	string fore = won + too + tree;
	//cout <<fore << fore.length() << fore.size();
	if (won.empty())
	{
	}
	won.compare(too); //will return boolean. with  0 being equal...........  1 won is wrong.  -1 too is wrong.
	
	cout << won.find("world"); //outputs index location of starting charater.  
	//must cast find to int or not found value may give large quasi-junk value.
	int(won.find("world"));

	//substring
	fore.substr(0,5);

	//compare is case sensitive.
	//THERE IS NO toupper or tolower....unless you use #include <ctype.h> and then it is only for characters(use for loop to loop through array)
	won[i] = tolower(won[i]);

	getch();
}