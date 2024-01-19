#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//initializes the variable for hours
	float hours;

	//asks how many hours do you work out
	cout << "How many hours do you work out per week?: ";
	cin >> hours;

	//determines how many hours was input then sends the repose to the screen
	if (hours >= 10)
	{
		cout << "You are getting buffed!";
		return 0;
	}
	else if (hours >= 5 && hours < 10)
	{
		cout << "Flexing those muscles,eh?";
		return 0;
	}
	else if (hours >= 2 && hours < 5)
	{
		cout << "You need to increase your workout hours!";
		return 0;
	}
	else
	{
		cout << "Do you even lift, bro?";
		return 0;
	}

}