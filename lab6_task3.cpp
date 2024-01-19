#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	char letter = 'A';

	while (letter <= 'z')
	{
		cout << letter << " = " << int(letter)<<endl;
		if (letter == 'Z')
		{
			letter = 'a';
		}
		else
		{
			letter = letter + 1;
		}
	}
}