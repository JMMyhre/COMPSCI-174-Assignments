#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	char in[7] = {};
	int i, ii, j;

	for (i = 0; i <= 6; i++)
	{
		cout << "input a character value: ";
		cin >> in[i];
	}
	
	for (ii = 0; ii < 7; ii++)
	{
		for (j = ii+1; j < 7; j++)
		{
			if (in[ii] == in[j])
			{
				cout << in[ii] << " ";
			}
		}
	}
	return 0;
}