#include <iostream>
#include "factorial.h"

using namespace std;


int main()
{
	int number;
	unsigned long long result;

	cout << "Enter a positive integer please: ";
	cin >> number;

	//--Error Checking--
	if (number < 0)
	{
		cout << "Factorial is not defined for negative numbers!" << endl;
		return 1;
	}
	//----Call factorial and store result using a pointer. Then output result.---

	unsigned long long* resultPtr = &result;
	*resultPtr = factorial(number);
	cout << "Factorial of " << number << " is " << *resultPtr << endl;

	return 0;

}

