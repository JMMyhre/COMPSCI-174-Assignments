#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	char input[7] = {};
	int i, j, in,iii;
	char r, d;
	
	for (in = 0; in < 7; in++)
	{
		cout << "input a lowercase value: ";
		cin >> input[in];
	}

	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 7; j++)
		{
			if (input[i] < input[j])
			{
				r = input[j];
				d = input[i];
				input[i] = r;
				input[j] = d;
			}
		}
	}
	for (iii = 0; iii < 7; iii++)
	{
		cout << input[iii];
	}
}