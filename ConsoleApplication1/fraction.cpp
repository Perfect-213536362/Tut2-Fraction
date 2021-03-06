
#ifndef fraction_H
#define fraction_H

#include <iostream>
#include <math.h>
#include "fraction.h"

using namespace std;
class fraction
{

private:
	int num;
	int denom;
	char dummychar;

public:
	fraction::fraction(int numerator, int denominator)
	{
		num = numerator;
		denom = denominator;
	}
	fraction::~fraction();

    fraction getFrac( int , int ) //Method for obtaining the fraction from the user..
	{
		int num, denom;
		cout << "Number entry\n\n";
		cout << "Enter the numerator:";
		cin >> num;
		cout << "Enter the denominator:";
		cin >> denom;
	
	}

	fraction fraction::addFraction(fraction add)
	{
		add.num = (num * add.denom) + (denom * add.num);
		add.denom = (denom * add.denom);
		return add;
	}

	fraction fraction::subFraction(fraction sub)
	{
		sub.num = (num * sub.denom) - (denom * sub.num);
		sub.denom = (denom * sub.denom);
		return sub;

	}
	fraction fraction::multFraction(fraction mult)
	{
		mult.num = (num * mult.num);
		mult.denom = (denom * mult.denom);
		return mult;
	}

	fraction fraction::divFraction(fraction div)

	{
		div.num = (num * div.denom);
		div.denom = (denom * div.num);
		return div;

	}
	void fraction::print() // function to display mixed fractions
	{
		int x, y;
		if (num > denom)
		{
			x = num / denom;
			y = num % denom;


			cout << "The result is " << x << "   " << y << " / " << denom << endl;
		}
		else
			cout << "The result is" << num << "/" << denom << endl;

	}

	fraction fraction::operator+(fraction add) //the operator which impliment addition as a member of function
	{
		add.num = (num * add.denom) + (denom * add.num);
		add.denom = (denom * add.denom);
		return add;
	}
	fraction fraction::operator-(fraction sub) //the operator which impliments subrection as a member of function
	{
		sub.num = (num * sub.denom) - (denom * sub.num);
		sub.denom = (denom * sub.denom);
		return sub;
	}
	fraction fraction::operator*(fraction mul) //the operator which impliment multiplication as a member of function
	{
		mul.num = (num * mul.num);
		mul.denom = (denom * mul.denom);
		return mul;
	}
	fraction fraction::operator/(fraction div) //the operator which impliment division as a member of function
	{
		div.num = (num * div.denom);
		div.denom = (denom * div.num);
		return div;
	}

};

#endif