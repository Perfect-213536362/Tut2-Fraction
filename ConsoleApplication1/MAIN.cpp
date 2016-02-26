#include <iostream>
#include <math.h>
#include "fraction.h"

using namespace std;
int main()
{

	fraction frac1, frac2, frac3, frac4, frac5, frac6;
	cout << "The results displayed will be the sum, difference, product and quotient.\n " << endl;
	frac1 = getFrac();
	frac2 = getFrac();
	frac3 = frac1.addFraction(frac2); //Adds the two fractions;  
	frac3.print();
	frac4 = frac1.subFraction(frac2); //Subtracts the two fractions 
	frac4.print();
	frac5 = frac1.multFraction(frac2); //Multiplies the two fractions  
	frac5.print();
	frac6 = frac1.divFraction(frac2); //Divides the two fractions 

	system("pause  ");
	return 0;

}