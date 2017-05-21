/* However, we can override the default precision that std::cout shows 
   by using the std::setprecision() function*/


#include <iostream>
#include <iomanip> //  std::setprecision() defined in header file iomanip
int main()
{
	std::cout << std::setprecision(16); // show 16 digits
	float f = 3.33333333333333333333333333333333333333f; //note: float values have  between 6 -9 digits
	std::cout << f << std::endl;                         // of precision; so output is:3.333333253860474
	
	double d = 3.3333333333333333333333333333333333333; //double values have between 15-18 digits 
	std::cout << d << std::endl;                       // of precision; so output is:3.333333333333334

	int pause;
	std::cin >> pause;
	return 0;
}