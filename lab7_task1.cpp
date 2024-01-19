#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()
{
	unsigned int i;
	unsigned int ii;
	for (i = 0; i <= 5; i = i + 1)
	{
		for (ii = 1; ii <= i; ii=ii+1 )
		{
			cout << ii;
		}
		cout << endl;
	}

}