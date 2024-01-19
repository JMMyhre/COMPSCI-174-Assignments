#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//initializes the variables
	int n;
	float x, y;

	//asks the user for the input for n
	cout << "input a non-negative integer value for n: ";
	cin >> n;

	//checks to see if the n value is positive
	if (n < 0) 
	{
		n = abs(n);
	}

	//asks user for an input for x
	cout << "input a value for x: ";
	cin >> x;

	//calculates the equation 
	y = 1 + ((n * x) / 1) + ((n * (n - 1) * pow(x, 2)) / 2) + ((n * (n - 1) * (n - 2) * pow(x, 3)) / 6);

	//prints the output value of y to the screen
	cout << "the value of the output y is: " << y;

	return 0;
}
