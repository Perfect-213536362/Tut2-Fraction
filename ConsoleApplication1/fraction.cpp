
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


public:
	fraction::fraction(int numerator, int denominator)
	{
		num = numerator;
		denom = denominator;
	}
	fraction::~fraction();
	fraction getFrac() //Method for obtaining the fraction from the user..
	{
		int num, denom;
		cout << "Number entry\n\n";
		cout << "Enter the numerator:";
		cin >> num;
		cout << "Enter the denominator:";
		cin >> denom;
		return fraction(num, denom);
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
};
#endif