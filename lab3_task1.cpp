#include <iostream>
using namespace std;

int main()
{
	int USD = 0;
	int CD = 0;
	cout << "Enter United States Dollar amount:";
	cin >> USD;
	CD = USD * 1.34;
	cout << "That would be " << CD << " Canadian Dollars";
	return 0;
}