#include <iostream>
using namespace std;

int main()
{
	float male = 0;
	float female = 0;
	float malepercent = 0;
	float femalepercent = 0;
	cout << "How many male students are in the class?: ";
	cin >> male;
	cout << "How many female students are in the class?: ";
	cin >> female;
	malepercent = (male / (male + female)) * 100;
	femalepercent = (female / (male + female)) * 100;
	cout << "The percent of male students in the class is :" << malepercent << "%" << endl;
	cout << "The percent of female students in the class is :" << femalepercent << "%" << endl;
	return 0;

}