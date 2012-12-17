//Extra Credit 
//Overload the output operator (<<) in addition to the tostring/showplayerData method (2 points)

#include <iostream>
#include <conio.h>
#include <string>
#include "SportsPlayer.h"
using namespace std;

void main()
{
	sportsPlayer arrPlayer[11];
	//randomly generating "player" data.  
	for (int i = 0; i <= 10; i++)
	{
		int age = (rand() % 20) + 20;
		int jersey = i;
		int points = (rand() % 1172) + 42;
		int attempts = (rand() % 200) + points;
		arrPlayer[i].setPlayerData(jersey, age, "", points, attempts);
	}
	//specifying names for "player" data.
	arrPlayer[0].setName("Jim");
	arrPlayer[1].setName("Joe");
	arrPlayer[2].setName("Jimmy");
	arrPlayer[3].setName("Justin");
	arrPlayer[4].setName("James");
	arrPlayer[5].setName("Jack");
	arrPlayer[6].setName("Jacque");
	arrPlayer[7].setName("Jak");
	arrPlayer[8].setName("Jerry");
	arrPlayer[9].setName("Jer");
	arrPlayer[10].setName("Bob");

	int input;
	cout << "Which player data would you like to see(0-10)?" << endl;
	cin >> input; //assuming valid input and no validation is required....
	cout << arrPlayer[input];
	cout << "This players skill level has been calculated to be: " << arrPlayer[input].skillLevel() << "%";
	getch();
}