#include <iostream>

using namespace std;

int main()
{
	int input1[5] = {};
	int input2[5] = {};
	bool result = true;
	int i, ii, iii;

	for (i=0; i <= 4; i++)
	{
		cout << "input an integer value for the first array: "<<endl;
		cin >> input1[i];
	}
	cout << endl << endl << "now for the second array" << endl << endl;
	for (ii = 0; ii <= 4; ii++)
	{
		cout << "input an integer value for the second array: " << endl;
		cin >> input2[ii];
	}

	for (iii = 0; iii <= 4; iii++)
	{
		if (input1[iii] == input2[iii])
		{
			result = false;
		}
		else
		{
			result = true;
		}
	}

	if (result == false)
	{
		cout << "those arrays are equal" << endl;
	}
	else
	{
		cout << "those arrays are not equal" << endl;
	}

	return 0;
}
