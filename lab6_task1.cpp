#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
	unsigned int num;
	unsigned int i = 2;

	cout << "input a positive number greater than 1: ";
	cin >> num;

	while (i <= num / 2)
	{
		if (num % i == 0)
		{
			cout << "That number is not prime";
			return 0;
		}
		else
		{
			i = i + 1;
		}
	}
	cout << "That number is prime";
}