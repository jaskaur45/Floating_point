/*
  There are two other special categories of floating point numbers:
  NaN: which stands for “Not a Number”.
  Inf: which represents infinity. Inf can be positive or negative.
*/
#include <iostream>

int main() {

	double zero = 0.0;
	double postinf = 5.5 / 0.0;   // postive infinity
	std::cout << postinf << "\n";

	double neginf = -5.5 / 0.0;  // negative infinity
	std::cout << neginf << "\n";

	double nan = 0.0 / 0.0;     // not a number (mathematically invaild)
	std::cout << nan << "\n";
	
	int pause;
	std::cin >> pause;
	return 0;
}