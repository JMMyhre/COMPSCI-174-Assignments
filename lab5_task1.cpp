#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	unsigned int usage;
	float bill;
	
	cout << "How many units did you use?: ";
	cin >> usage;

	if (usage <= 20)
	{
		bill = usage * 0.50;
	}
	else if (usage <= 70 && usage > 20)
	{
		bill = ((usage - 20) * 0.85) + (20 * 0.50);
	}
	else if (usage <= 120 && usage > 70)
	{
		bill = ((usage - 70) * 1.05) + (50 * 0.85) + (20 + 0.50);
	}
	else if (usage > 120)
	{
		bill = ((usage - 120) * 1.50) + (50 * 1.05) + (50 * 0.85) + (20 * 0.50);
	}

	bill = bill * 1.20;

	cout << "Your total electricity bill is: $" << bill;
}