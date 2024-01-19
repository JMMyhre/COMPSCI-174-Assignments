#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	unsigned int num;
	unsigned int sum = 0;
	unsigned int digit;

	cout << "input a positive number: ";
	cin >> num;
	while (num > 0) {
		digit = num % 10;
		num = num / 10;
		sum = sum + digit;
	}
	cout << "the sum of the digits is: "<< sum;
}