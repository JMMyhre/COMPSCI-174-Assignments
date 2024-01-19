#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class text
{
public:
	char data[100];
	int len = 0;
	text(const char* str)
	{
		int i = 0;
		for (i = 0; str[i] != '\0'; i++)
		{
			data[i] = str[i];
			len++;
		}
		data[i] = '\0';
	}

	string to_upper()
	{
		string output_str = " ";
		for (int i = 0; data[i] != '\0'; i++)
		{
			if (data[i] >= 97 && data[i] <= 122)
			{
				output_str += data[i] - 32;
			}
			else
			{
				output_str += data[i];
			}
		}
		output_str = output_str + '\0';
		return output_str;
	}
	string reverse()
	{
		string reversed = " ";
		for (int i = len; i >= 0; i--)
		{
			reversed += data[i];
		}
		return reversed;
	}
	int length()
	{
		int count = 0;
		for (int i = len; i >= 0; i--)
		{
			count += 1;
		}
		return count;
	}

};


int main()
{
	text sample = "This is a sample text";
	cout << sample.to_upper(); // This should display "THIS IS A SAMPLE TEXT"
	cout << endl;
	cout << sample.reverse(); // This should display "txet elpmas a si sihT"
	cout << endl;
	cout << sample.length(); // This should display 21
}