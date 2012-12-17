#include <iostream>
#include <string>

using namespace std;

class sportsPlayer
{
private:
	int _jersey;
	int _age;
	string _name;
	int _points;
	int _attempts;

public:
	sportsPlayer();
	sportsPlayer(int,int,string,int,int);
	void setPlayerData(int,int,string,int,int);
	string showPlayer(sportsPlayer); //formatted output
	double skillLevel(); // skillLevel method(points/attempts) * 100 
	void setName(string);
	int getJersey();
	int getAge();
	string getName();
	int getPoints();
	int getAttempts();
	friend ostream& operator<<(ostream&, sportsPlayer&);
};