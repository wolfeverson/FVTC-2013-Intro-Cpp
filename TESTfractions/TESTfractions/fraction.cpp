#include <iostream>
#include <string>
#include "fraction.h"
using namespace std;


	fraction::fraction()
	{
		top = 1;
		bottom = 1;
	}

	fraction::fraction(int to, int bo)
	{
			//if (to <= 0)
			//{
			top = to;
			//}
			//if (bo <= 0)
			//{
			bottom = bo;
			//}
	}

	double fraction::toDouble()
	{
		double result = (double)top/(double)bottom;
		return result;
	}

	ostream& operator <<(ostream& os, fraction& val1)
	{
		if (val1.top < val1.bottom)
		{
		os  << val1.top << "/" << val1.bottom;
		}
		else
		{
			int whole = val1.top/val1.bottom;
			int mod = val1.top%val1.bottom;
			val1.top = mod;
			if (val1.top != 0)
			{
				os << whole << "  " << val1.top << "/" << val1.bottom;
			}
			else
			{
				os << whole;
			}
		}
		return os;
	}

	fraction& operator +(fraction& val1, fraction& val2)
	{
		fraction sum; 

		if (val1.bottom == val2.bottom)
		{
			sum.top = val1.top + val2.top;
			sum.bottom = val1.bottom;
		}
		else 
		{	
			sum.top = (val1.top * val2.bottom) + (val2.top * val1.top);
			sum.bottom = val1.bottom * val2.bottom;
		}
		return sum;
	}

	void fraction::reduce()  //mutator
	{
		{
			int common = bottom;
			while (common > 1)
			{
				if ((bottom%common == 0) && (top%common == 0))
				{
					top = top/common;
					bottom = bottom/common;
					break;
				}
					common--;
			}
		}
	}