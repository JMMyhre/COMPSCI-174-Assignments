#include <iostream> 
#include <string>

using namespace std;

int main()
{
	char lowercase;
	char uppercase;


	cout << "Enter a lowercase character: ";
	cin >> lowercase;
	uppercase = lowercase - 32;
	cout << "The uppercase character for the character you entered is: " << uppercase;
}