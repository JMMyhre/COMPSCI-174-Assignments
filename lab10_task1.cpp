#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string str_to_upper(string input_str)
{
	string output_str = " ";
	for (int i = 0; input_str[i] != '\0'; i++) {
		if ((input_str[i] >= 97)&&(input_str[i]<=122))
		{
			output_str = output_str-32
		}
		else {
			output_str = input_str[i];
		}
	}
	output_str = output_str + '\0';
	return output_str;
}
int main()
{
	string userinput;
	cout << "enter a string: ";
	getline(cin, userinput);
	str_to_upper(userinput);
}