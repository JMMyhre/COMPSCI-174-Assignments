#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int i[5] = {};
	int ii;

	cout << "Input 5 integers: ";
	cin >> i[0] >> i[1] >> i[2] >> i[3] >> i[4];

	cout << endl << "The reverse of the integers entered is: ";
	for (ii = 4; ii >= 0; ii = ii - 1)
	{
		cout<<i[ii];
	}
	
}