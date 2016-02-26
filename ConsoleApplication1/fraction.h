#pragma once

#ifndef fraction_H
#define fraction_H



class fraction
{
private:
	int num;
	int den;
	char dummychar; //A variable to hold the �/� character
public:
	fraction(int numerator = 0, int denominator = 1);
	~fraction();
	fraction getFrac();
	fraction addFraction(fraction add);
	fraction subFraction(fraction sub);
	fraction multFraction(fraction mult);
	fraction divFraction(fraction div);
	void print();
};

#endif