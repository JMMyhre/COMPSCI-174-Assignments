#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	//initializes the variables that are needed for the program
	unsigned int p1space = 1, p2space = 1;
	unsigned int dice = 1,startp, coin = 1,dicenum;
	string p1name, p2name, playerturn, coinstart,coinflip, coinside, diceroll,dicestart;

	//asks the players for their full names
	cout << "Player 1 enter your full name: ";
	getline(cin, p1name);
	cout << "Player 2 enter your full name: ";
	getline(cin, p2name);

	//welcomes the players and decides who goes first
	cout <<endl<<"_____________________________"<<endl<< endl<<"Hello " << p1name << " and " << p2name << endl;
	cout << "Welcome to snakes and ladders" << endl << "________________________________________________________________________________________________________________________" << endl << endl << "Rules:" << endl << "------"<<endl;
	cout << "Your goal is to get to the number 36 except theres different obstacles in your way." << endl << "If you land on a ladder you'll move up the board, whereas if you land on a snake you'll slide back down the board." << endl << "Oh, and of course you'll be competeing against each other," << endl << "so if one of you lands on the space the other player occupies, then the player on that space will reset to space 1" << endl;
	cout << "________________________________________________________________________________________________________________________"<< endl << endl<< endl<< "Anyway now that the rules are out of the way lets start the game by deciding who goes first" << endl;
	cout << "We will decide with a coin flip Heads will be " << p1name << " and Tails will be " << p2name << endl;
	cout << "Type flip to flip the coin: ";
	getline(cin, coinstart);

	//flips a coin to decide who goes first
	while (coin == 1)
	{
		if (coinstart == "flip")
		{
			startp = rand() % 2;
			if (startp == 0)
			{
				playerturn = p1name;
				coinside = "Heads";
			}
			else if (startp == 1)
			{
				playerturn = p2name;
				coinside = "Tails";
			}
			coin = 0;
		}
		else
		{
			cout << "Type flip to flip the coin: ";
			getline(cin, coinstart);
			coin = 1;
		}
	}
	
	//displays what the outcome of the coin was and shows who goes first
	cout << endl << "_____________________________" << endl << endl << "The coin landed on " << coinside << " which means " << playerturn << " will go first.";

	//sets a while loop for the players to play until they reach a goal
	while ((p1space < 36) && (p2space < 36))
	{
		//seperates the previous line and tells the player its their turn
		cout << endl << "_____________________________" << endl;
		cout << endl << playerturn << " its your turn."<<endl;

		//determines if the player is the person who entered their name first
		if (playerturn == p1name)
		{

			//displays the place that the player is currently at
			cout << "You are currently at space: [" << p1space << "]" << endl<<"-----------------------------"<<endl;

			//checks to see if the dice has been rolled, and if it hasn't it will prompt the player to roll the dice
			while (dice == 1)
			{
				//gets the input to roll the dice
				cout << "Type roll to roll the dice: ";
				getline(cin, dicestart);

				//determines if the correct phrase has been typed
				if (dicestart == "roll")
				{
					
					//rolls the dice 
					dicenum = rand() % 6 + 1;

					//determines the outcome of the dice and outputs the correct response
					if (dicenum == 1)
					{
						if (p1space + 1 > 36)
						{
							cout << "You rolled a 1." << endl;
							cout << "You cant go over thirty six so you will stay in place." << endl;
							dice = 0;
						}
						else if (p1space + 1 == 36)
						{
							break ;
						}
						else 
						{
							cout << "You rolled a 1." << endl;
							p1space = p1space + 1;
							dice = 0;
						}
					}
					else if (dicenum == 2)
					{
						if (p1space + 2 > 36)
						{
							cout << "You rolled a 2." << endl;
							cout << "You cant go over thirty six so you will stay in place." << endl;
							dice = 0;
						}
						else if (p1space + 2 == 36)
						{
							break;
						}
						else 
						{
							cout << "You rolled a 2." << endl;
							p1space = p1space + 2;
							dice = 0;
						}
					}
					else if (dicenum == 3)
					{
						if (p1space + 3 > 36)
						{
							cout << "You rolled a 3." << endl;
							cout << "You cant go over thirty six so you will stay in place." << endl;
							dice = 0;
						}
						else if (p1space + 3 == 36)
						{
							break;
						}
						else
						{
							cout << "You rolled a 3." << endl;
							p1space = p1space + 3;
							dice = 0;
						}
					}
					else if (dicenum == 4)
					{
						if (p1space + 4 > 36)
						{
							cout << "You rolled a 4." << endl;
							cout << "You cant go over thirty six so you will stay in place." << endl;
							dice = 0;
						}
						else if (p1space + 4 == 36)
						{
							break;
						}
						else
						{
							cout << "You rolled a 4." << endl;
							p1space = p1space + 4;
							dice = 0;
						}
					}
					else if (dicenum == 5)
					{
						if (p1space + 5 > 36)
						{
							cout << "You rolled a 5." << endl;
							cout << "You cant go over thirty six so you will stay in place." << endl;
							dice = 0;
						}
						else if (p1space + 5 == 36)
						{
							break;
						}
						else
						{
							cout << "You rolled a 5." << endl;
							p1space = p1space + 5;
							dice = 0;
						}
					}
					else if (dicenum == 6)
					{
						if (p1space + 6 > 36)
						{

							cout << "You rolled a 6." << endl << "You cant go over thirty six so you will stay in place." << endl;
							cout << "Since you rolled a 6 you get to go again." << endl;
							cout << "Your space is currently: [" << p1space << "]" << endl;
							dice = 1;

						}
						else if (p1space + 6 == 36)
						{
							break;
						}
						else 
						{
							p1space = p1space + 6;
							if (p1space == 35)
							{
								cout << "Oh No! You landed on a snake." << endl;
								p1space = 22;
								cout << "Your new space will be: [" << p1space << "]" << endl;
							}
							cout << "You rolled a 6. Congratulations! you get to roll again" << endl;
							cout << "Your space is currently: [" << p1space << "]" << endl;
							dice = 1;
						}
					}
				}

				//tells the player to re-type the phrase if it hasnt been typed correctly
				else
				{
					cout << "Type roll to roll the dice: ";
					getline(cin, dicestart);
				}
			}

			//determines if the player has landed on the ladder at space 3
			if (p1space == 3)
			{
				cout << "Congrats you landed on a ladder." << endl;
				p1space = 16;
				cout << "Your new space will be: [" << p1space << "]" << endl;
			}

			//determines if the player has landed on the ladder at space 15
			else if (p1space == 15)
			{
				cout << "Congrats you landed on a ladder." << endl;
				p1space = 25;
				cout << "Your new space will be: [" << p1space << "]" << endl;
			}

			//determines if the player has landed on the ladder at space 21
			else if (p1space == 21)
			{
				cout << "Congrats you landed on a ladder." << endl;
				p1space = 32;
				cout << "Your new space will be: [" << p1space << "]" << endl;
			}

			//determines if the player has landed on the snake at space 12
			else if (p1space == 12)
			{
				cout << "Oh No! You landed on a snake." << endl;
				p1space = 2;
				cout << "Your new space will be: [" << p1space << "]" << endl;
			}

			//determines if the player has landed on the snake at space 30
			else if (p1space == 30)
			{
;				cout << "Oh No! You landed on a snake." << endl;
				p1space = 4;
				cout << "Your new space will be: [" << p1space << "]" << endl;
			}

			//determines if the player has landed on the snake at space 35
			else if (p1space == 35)
			{
				cout << "Oh No! You landed on a snake." << endl;
				p1space = 22;
				cout << "Your new space will be: [" << p1space << "]" << endl;
			}

			//sends the other player back to space one 
			if (p1space == p2space)
			{
				cout << "Congrats you landed on the same space as the other player this will send them back to space 1"<<endl;
				p2space = 1;
			}

			//tells the player where they are at at the end of their turn then switches the turn to the other player
			cout << "You are now at: [" << p1space << "]";
			playerturn = p2name;
			dice = 1;
		}

		//determines if the player is the person who entered their name second
		else if (playerturn == p2name)
		{
			
			//displays the place that the player is currently at
			cout << "You are currently at space: [" << p2space << "]" << endl << "-----------------------------" << endl;

			//checks to see if the dice has been rolled, and if it hasn't it will prompt the player to roll the dice
			while (dice == 1)
			{
				//gets the input to roll the dice
				cout << "Type roll to roll the dice: ";
				getline(cin, dicestart);

				//determines if the correct phrase has been typed
				if (dicestart == "roll")
				{

					//rolls the dice 
					dicenum = rand() % 6 + 1;

					//determines the outcome of the dice and outputs the correct response
					if (dicenum == 1)
					{
						if (p2space + 1 > 36)
						{
							cout << "You rolled a 1." << endl;
							cout << "You cant go over thirty six so you will stay in place." << endl;
							dice = 0;
						}
						else if (p2space + 1 == 36)
						{
							break;
						}
						else
						{
							cout << "You rolled a 1." << endl;
							p2space = p2space + 1;
							dice = 0;
						}
					}
					else if (dicenum == 2)
					{
						if (p2space + 2 > 36)
						{
							cout << "You rolled a 2." << endl;
							cout << "You cant go over thirty six so you will stay in place." << endl;
							dice = 0;
						}
						else if (p2space + 2 == 36)
						{
							break;
						}
						else
						{
							cout << "You rolled a 2." << endl;
							p2space = p2space + 2;
							dice = 0;
						}
					}
					else if (dicenum == 3)
					{
						if (p2space + 3 > 36)
						{
							cout << "You rolled a 3." << endl;
							cout << "You cant go over thirty six so you will stay in place." << endl;
							dice = 0;
						}
						else if (p2space + 3 == 36)
						{
							break;
						}
						else
						{
							cout << "You rolled a 3." << endl;
							p2space = p2space + 3;
							dice = 0;
						}
					}
					else if (dicenum == 4)
					{
						if (p2space + 4 > 36)
						{
							cout << "You rolled a 4." << endl;
							cout << "You cant go over thirty six so you will stay in place." << endl;
							dice = 0;
						}
						else if (p2space + 4 == 36)
						{
							break;
						}
						else
						{
							cout << "You rolled a 4." << endl;
							p2space = p2space + 4;
							dice = 0;
						}
					}
					else if (dicenum == 5)
					{
						if (p2space + 5 > 36)
						{
							cout << "You rolled a 5." << endl;
							cout << "You cant go over thirty six so you will stay in place." << endl;
							dice = 0;
						}
						else if (p2space + 5 == 36)
						{
							break;
						}
						else
						{
							cout << "You rolled a 5." << endl;
							p2space = p2space + 5;
							dice = 0;
						}
					}
					else if (dicenum == 6)
					{
						if (p2space + 6 > 36)
						{
							cout << "You rolled a 6." << endl << "You cant go over thirty six so you will stay in place." << endl;
							cout << "Since you rolled a 6 you get to go again." << endl;
							cout << "Your space is currently: [" << p2space << "]" << endl;
							dice = 1;

						}
						else if (p2space + 6 == 36)
						{
							break;
						}
						else
						{
							p2space = p2space + 6;
							if (p2space == 35)
							{
								cout << "Oh No! You landed on a snake." << endl;
								p2space = 22;
								cout << "Your new space will be: [" << p2space << "]" << endl;
							}
							cout << "You rolled a 6. Congratulations! you get to roll again" << endl;
							cout << "Your space is currently: [" << p2space << "]" << endl;
							dice = 1;
						}
					}
				}

				//tells the player to re-type the phrase if it hasnt been typed correctly
				else
				{
					cout << "Type roll to roll the dice: ";
					getline(cin, dicestart);
				}
			}
			//determines if the player has landed on the ladder at space 3
			if (p2space == 3)
			{
				cout << "Congrats you landed on a ladder." << endl;
				p2space = 16;
				cout << "Your new space will be: [" << p2space << "]" << endl;
			}

			//determines if the player has landed on the ladder at space 15
			else if (p2space == 15)
			{
				cout << "Congrats you landed on a ladder." << endl;
				p2space = 25;
				cout << "Your new space will be: [" << p2space << "]" << endl;
			}

			//determines if the player has landed on the ladder at space 21
			else if (p2space == 21)
			{
				cout << "Congrats you landed on a ladder." << endl;
				p2space = 32;
				cout << "Your new space will be: [" << p2space << "]" << endl;
			}

			//determines if the player has landed on the snake at space 12
			else if (p2space == 12)
			{
				cout << "Oh No! You landed on a snake." << endl;
				p2space = 2;
				cout << "Your new space will be: [" << p2space << "]" << endl;
			}

			//determines if the player has landed on the snake at space 30
			else if (p2space == 30)
			{
				cout << "Oh No! You landed on a snake." << endl;
				p2space = 4;
				cout << "Your new space will be: [" << p2space << "]" << endl;
			}

			//determines if the player has landed on the snake at space 35
			else if (p2space == 35)
			{
				cout << "Oh No! You landed on a snake." << endl;
				p2space = 22;
				cout << "Your new space will be: [" << p2space << "]" << endl;
			}

			//sends the other player back to space one 
			if (p2space == p1space)
			{
				cout << "Congrats you landed on the same space as the other player this will send them back to space 1"<<endl;
				p1space = 1;
			}

			//tells the player where they are at at the end of their turn then switches the turn to the other player
			cout << "You are now at: [" << p2space << "]";
			playerturn = p1name;
			dice = 1;
			}
	}
	if (p1space == 36)
	{
		cout << endl << "_____________________________" << endl << endl << "!!!   Congratulations " << p1name << "   !!!" << endl;
		cout << "You won snakes and ladders" << endl << endl;
		cout << "Thank you for Playing! :)" << endl;
		cout << "_____________________________";
	}
	else if (p2space == 36)
	{
		cout << endl << "_____________________________" << endl << endl << "!!!   Congratulations " << p2name << "   !!!" << endl;
		cout << "You won snakes and ladders" << endl << endl;
		cout << "Thank you for Playing! :)" << endl;
		cout << "_____________________________";
	}
}