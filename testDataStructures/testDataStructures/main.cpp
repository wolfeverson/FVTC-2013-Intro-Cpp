#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;

struct superHero
{
	string name;
	string power;
	int age;
};


void main()
{
	superHero cyclops;
	cyclops.age = 18;
	cyclops.name = "Cyclops";
	cyclops.power = "Lazorbeams";
	superHero iceman;
	iceman.age = 16;
	iceman.name = "Iceman";
	iceman.power = "Icebeam";
	superHero heroList[10] = {cyclops, iceman};
	int super_Length = 10;

	int heroIndex = 2;
	bool isQuit = false;
	while (!isQuit)
	{
			superHero temphero;
			cout << "Name?";
			cin >> temphero.name;
			cin.ignore(' ');
			cout << endl << "Power?";
			cin >> temphero.power;
			cin.ignore(' ');
			cout << endl << "Age?";
			cin >> temphero.age;
			if  (temphero.name == "q" || temphero.power == "q")
			{
				 isQuit = true;
			}
			else
			{
				heroList[heroIndex] = temphero;
				heroIndex++;
			}
	}



	for (int i = 0; i < heroIndex; i++)
	{
		cout << " Name: " <<  heroList[i].name;
		cout << " Power: " << heroList[i].power;
		cout << " Age: " << heroList[i].age;
		cout << endl;
	}

	getch();
}

