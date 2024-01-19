#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	//these are the variables that I used in the code
	bool prime = true;
	int counter = 2;
	int iii, n, i, j;

	//this for loop is used to increas the n variable to make sure the correct number of outputs are produced, so it will go from 1 output to three outputs, so that the pattern matches
	for (n = 1; n <= 9; n = n + 2)
	{
		//This for loop is used to execute the program for the correct amount of times specified, so if the previous for loop specifies 1 time, this code will run the following code once and produce an outcome
		for (i = 1; i <= n; i=i+1)
		{
			// this for loop is checking to see if the value that will be checked for the prime is under the counter value
			for (iii = 2; iii <= counter; iii = iii + 1)
			{
				//this for loop is used to check and see if the output is prime, then checks if its true and prints the outcome from there
				for (j = 2; j <= iii/2; j++)
				{
					if (iii % j == 0)
					{
						prime = false;
					}
				}
				if (prime == true)
				{
					cout << iii << " ";
				}
				else
				{
					prime = true;
				}
			}
		}
		cout << endl;
	}
	//I worked on this code for over 6 hours and could not figure out what I was doing wrong
	// im upset with the outcome of the program, and all I could get was the general parttern of the numbers
	// When I tried to get help in class you were already bombarded and had to leave immediately after
	//and I didnt have a screenshot of what you explained in class so I had zero reference
	// apologies for the poor code.
}
