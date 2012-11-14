#include <iostream>
#include <string>
#include "turkey.h"
using namespace std;


	turkey::turkey()
	{
		_size = 5;
	}

	turkey::turkey(int size)
	{
		if (size > 2 && size <= 10)
		{
			_size = size;
		}
		else
		{
			_size = 5;
		}
	}

	ostream& operator<<(ostream &os, const turkey &b)
	{
	os <<  "        .--.					" <<endl;
    os <<  "       /} p \             /}	" <<endl;
    os <<  "bwak?  `~)-) /           /` }	" <<endl;
    os <<  "         ( / /          /`}.' }	" <<endl;
    os <<  "          / / .-'""-.  / ' }-'}	" <<endl;
    os <<  "         / (.'       \/ '.'}_.}	" <<endl;
    os <<  "       |            `}   .}._}	" <<endl;
    os <<  "       \    .-=-';   } ' }_.}	" <<endl;
	os <<  "        \    `.-=-;'  } '.}.-}	" <<endl;
    os <<  "         '.   -=-'    ;,}._.}	" <<endl;
    os <<  "           `-,_  __.'` '-._}	" <<endl;
    os <<  "               `|||				" <<endl;
	for (int i = 0; i < b._size; i++)
		{
			os << "                |||" << endl;
		}
	os << "              .=='=," << endl;
	return os;
	}