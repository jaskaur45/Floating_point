// Use of std::setprecision to Set decimal precision
// Sets the decimal precision to be used to format floating - point values on output operations.

#include "stdafx.h"
#include <iostream>
#include <iomanip> // setprecision() function is defined in header file iomanip

int main()
{
	
	double d(0.1);// Direct initialization of variable (2nd ways of varible initialization)
	std::cout << "d is:" << d << std::endl;
	std::cout << std::setprecision(17); //if setpreciosion was set to 16,output would have 0.1 because most
	                                   // double values having at least 16 significant digits of precision
	std::cout << "d now is:" << d << std::endl;


	int pause;
	std::cin >> pause;
    return 0;
}

