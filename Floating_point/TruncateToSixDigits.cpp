/*When outputting floating point numbers, std::cout has a default precision of 6 that is, 
it assumes all floating point variables are only significant to 6 digits of precision, 
and hence it will truncate anything after that.*/

#include "stdafx.h"
#include <iostream>

int main() {

	float f;
	f = 9.87654321f; // f suffix means this number should be treated as a float
	std::cout << f << std::endl;
	f = 987.654321f;
	std::cout << f << std::endl;
	f = 987654.321f;
	std::cout << f << std::endl;
	f = 9876543.21f;
	std::cout << f << std::endl;
	f = 0.0000987654321f;
	std::cout << f << std::endl;

	int pause;
	std::cin >> pause;
	return 0;
}