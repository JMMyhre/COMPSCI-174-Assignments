#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//reverse function
void str_rev(string input_str)
{
	//takes the string length minus 1, and then checks to see if its above 0 then decreases
	for (int i = input_str.length()-1; i>=0; i--)
	{
		// outputs character by character the reversed string
		cout << input_str[i];
	}
}

int main(void)
{
	//gives the input string variable a name
	string input;

	//asks for the user input
	cout << "Enter a string: ";
	getline(cin, input);

	//says that the reverse of the string is "   " then sends the input string to the str reverse function
	cout << "The reverse of your string: ";
	str_rev(input);
	return(0);
}