#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	unsigned int lowerlimit, upperlimit;
	unsigned int prime;
	bool var = true;

	cout << "Enter the range to find all prime numbers in that range: ";
	cin >> lowerlimit>> upperlimit;
	for (unsigned int i = lowerlimit; i <= upperlimit; i = i + 1)
	{
		for (prime = 2; prime <= i / 2;prime = prime+1)
		{
			if (i % prime == 0)
			{
				var = false;
				break;
			}
		}
		if (var == true)
		{
			cout << i;
			cout << endl;
		}
		else {
			var = true;
		}

	}
}