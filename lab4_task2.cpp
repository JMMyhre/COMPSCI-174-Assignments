#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	float hours;
	string gymname;

	cout << "How many hours do you work out per week? :";
	cin >> hours;
	cin.ignore();
	hours = abs(hours);
	cout << "What is the name of your gym? :";
	getline(cin, gymname);
	cout << "You work out " << hours << " hours per day at " << gymname << ".";
	return 0;

}