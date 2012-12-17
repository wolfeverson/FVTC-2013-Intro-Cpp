#include "SportsPlayer.h"
#include <string>
#include <sstream>

	sportsPlayer::sportsPlayer()
	{
		_jersey = 0;
		_age = 0;
		_name = "0";
		_points = 0;
		_attempts =0;
	}

	sportsPlayer::sportsPlayer(int jer, int age, string name, int point, int attempt)
	{
		_jersey = jer;
		_age = age;
		_name = name;
		_points = point;
		_attempts = attempt;
	}

	void sportsPlayer::setName(string name)
	{
		_name = name;
	}

	void sportsPlayer::setPlayerData(int jer, int age, string name, int point, int attempt)
	{
		_jersey = jer;
		_age = age;
		_name = name;
		_points = point;
		_attempts = attempt;
	}

	double sportsPlayer::skillLevel()
	{
		// skillLevel method(points/attempts) * 100 
		return ((double)_points / (double)_attempts * 100);
	}

	int sportsPlayer::getJersey()
	{
		return _jersey;
	}

	int sportsPlayer::getAge()
	{
		return _age;
	}

	string sportsPlayer::getName()
	{
		return _name;
	}

	int sportsPlayer::getPoints()
	{
		return _points;
	}

	int sportsPlayer::getAttempts()
	{
		return _attempts;
	}

	ostream& operator <<(ostream& os, sportsPlayer& m)
	{
		os << endl << "**********Player Data***********" << endl;
		os << "PLayer Name: " << m._name << endl << "Player Number: " << m._jersey << endl;
		os << "Player Age: " << m._age << endl << "Player Points: " << m._points << endl;
		os << "Player Attempts: " << m._attempts << endl << endl;
		return os;
	}

	string sportsPlayer::showPlayer(sportsPlayer m)
	{
		ostringstream os;
		os << "/n**********Player Data***********";
		os << "/nPLayer Name: " << m._name << "/nPlayer Number: " << m._jersey;
		os << "/nPlayer Age: " << m._age << "/nPlayer Points; " << m._points;
		os << "/nPlayer Attempts: " << m._attempts << endl << endl;
		string temp = os.str();
		return temp;
	}
	
	
	





