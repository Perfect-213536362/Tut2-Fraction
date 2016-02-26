#pragma once
class fraction
{
private:
	int num;
	int denom;

public:
	fraction();
	~fraction();

	fraction::fraction();
	fraction::~fraction();
	fraction fraction::addFraction(fraction add);
	fraction fraction::subFraction(fraction sub);
	fraction fraction::multFraction(fraction mult);
	fraction fraction::divFraction(fraction div);
};