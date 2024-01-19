#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int matrice1[2][2] = {};
	int matrice2[2][2] = {};
	float matrice3[2][2] = {};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "enter a value for matrice 1: ";
			cin >> matrice1[i][j];
			cout << endl;
		}
	}
	for (int ii = 0; ii < 2; ii++)
	{
		for (int jj = 0; jj < 2; jj++)
		{
			cout << "enter a value for matrice 2: ";
			cin >> matrice2[ii][jj];
			cout << endl;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			matrice3[i][j] = 0;
			for (int k = 0; k < 2; k++)
			{
				matrice3[i][j] += matrice1[i][k] * matrice2[k][j];
			}
		}
	}
	for (int iV = 0; iV < 2; iV++)
	{
		for (int jV = 0; jV < 2; jV++)
		{
			matrice3[iV][jV] = 1.0f / matrice3[iV][jV];
			cout << matrice3[iV][jV] << " ";
		}
		cout << endl;
	}

}