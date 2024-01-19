#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n, m = 3;
	
	cout << "enter an integer for n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n-i ; j > 0; j--)
		{
			cout << "+-";
		}
		cout << endl;
	}
}