#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	//initializes the i variable
	int i = 0;
	for (i; i < 4; i++)
	{
		//increments the spaces at the beginning to make the pyramid shape
		for (int n = 0; n <= i*2; n++)
		{
			cout << " ";
		}
		//increments the columns of the pluses and decreases from there
		for (int j = 7; j>i*2; j--)
		{
			cout << "+ ";
		}
		//goes to new line
		cout << endl;
	}
}