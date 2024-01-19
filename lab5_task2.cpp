#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int num1, num2, num3;

	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the third number: ";
	cin >> num3;

	if (num1 > num2 && num1 > num3)
	{
		cout << num1 << " is the greatest number";
	}
	else if (num2 > num1 && num2 > num3)
	{
		cout << num2 << " is the greatest number";
	}
	else if (num3 > num1 && num3 > num2)
	{
		cout << num3 << " is the greatest number";
	}
}