#include <iostream>
using namespace std;

int main()
{
	/*creates the different integer variables needed to store the
	data from the input as well as the prices of each of the seats*/
	int A = 15;
	int B = 12;
	int C = 9;
	int amountA, amountB, amountC, totalprofit;

	/*asks how many of each seat was sold then puts it into the variables*/
	cout << "How many class A seats were sold? :";
	cin >> amountA;
	cout << "How many class B seats were sold? :";
	cin >> amountB;
	cout << "How many class C seats were sold? :";
	cin >> amountC;
	
	/*calculates total profit from the seats then sends the result back to the user*/
	totalprofit = (amountA * A) + (amountB * B) + (amountC * C);

	cout << "The total income generated from seats was: $" << totalprofit;
}