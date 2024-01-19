#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*identifies the variables that are needed to run the program
	* it also identifies the prices for the tickets*/
	string moviename;
	float adultprice = 10.00;
	float childprice = 6.00;
	int adulttickets, childtickets;
	float boxoffice, distributor, grossbox;

	/*asks the title of the movie*/
	cout << "What is the name of the movie?: ";
	getline(cin, moviename);

	/*asks the number of tickets sold*/
	cout << "What was the number of adult tickets sold?: ";
	cin >> adulttickets;
	cout << "What was the number of child tickets sold?: ";
	cin >> childtickets;

	/*calculates the total profit then divides the total amoungst
	* the distributor and the box office*/
	grossbox = (adultprice * adulttickets) + (childprice * childtickets);
	boxoffice = (grossbox * 0.2);
	distributor = (grossbox * 0.8);

	/*prints the profit and the amount made by each party to the screen*/
	cout << "The gross Box Office profit was: $" << grossbox << endl;
	cout << "The net Box Office profit was: $" << boxoffice << endl;
	cout << "The amount paid to the Distributor was: $" << distributor << endl;

	return 0;
}