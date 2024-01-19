#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int matrice1[3][3] = {};
	int matrice2[3][3] = {};
	int matrice3[3][3] = {};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "enter a value for the first matrice: ";
			cin >> matrice1[i][j];
			cout << endl;
		}
	}
	for (int ii = 0; ii < 3; ii++)
	{
		for (int jj = 0; jj < 3; jj++)
		{
			cout << "enter a value for the second matrice: ";
			cin >> matrice2[ii][jj];
			cout << endl;
		}
	}
	cout << "The sum of those two matrices are:" << endl;
	for (int iii = 0; iii < 3; iii++)
	{
		for (int jjj = 0; jjj < 3; jjj++)
		{
			matrice3[iii][jjj] = matrice1[iii][jjj] + matrice2[iii][jjj];
			cout << matrice3[iii][jjj]<<" ";
		}
		cout<<endl;
	}
}