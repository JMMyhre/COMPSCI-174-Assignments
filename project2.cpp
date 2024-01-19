#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

void option1()
{
	bool answercheck = false;
	bool filego = false;
	string filename, text;
	char yesno;
	int var = 0;

	// asking for you to input a file name
	cout << "Input a file name: ";
	getline(cin, filename);

	//asking if you want to view the file name that you entered
	while (answercheck == false)
	{
		cout << endl << "You want to view " << filename << endl << "Is this correct (y/n)";
		cin >> yesno;
		cin.ignore(1000, '\n');
		if (yesno == 'y')
		{
			filego = true;
			answercheck = true;
			cout << "--------------------" << endl;
		}
		else if (yesno == 'n')
		{
			cout << "--------------------" << endl;
			cout << "What file would you like to view: ";
			getline(cin, filename);
		}
		else
		{
			cout << "--------------------" << endl;
			cout << "That is an invalid input please input y or n"<<endl;
			cout << "--------------------" << endl;
		}
	}
	while (filego == true)
	{
		ifstream infile;
		infile.open(filename);
		if (!infile)
		{
			cout << "Error: File Does not exist or Failed to Open" << endl;
			break;
		}
		while (getline(infile, text))
		{
			cout << text << endl;
		}
		infile.close();
		filego = false;
		break;
	}
}
void option2()
{
	string filename;
	fstream file;
	cout << "What would you like to name the file (please include filetype): " << endl;
	getline(cin, filename);
	file.open(filename, ios::app);
	if (!file)
	{
		cout << "Error: File failed to be created"<<endl;
		file.close();
	}
	else
	{
		cout << "File: " << filename << " was created" << endl;
		file.close();
	}
}
void option3()
{
	bool answercheck = false;
	bool filego = false;
	string filename, text;
	char yesno,answer,ask;
	int var = 0;
	ofstream outfile;

	cout << "Input a file name: ";
	getline(cin, filename);

	while (answercheck == false)
	{
		cout << endl << "You want to write to " << filename << endl << "Is this correct (y/n)";
		cin >> yesno;
		cin.ignore(1000, '\n');
		if (yesno == 'y')
		{
			filego = true;
			answercheck = true;
			cout << "--------------------" << endl;
		}
		else if (yesno == 'n')
		{
			cout << "--------------------" << endl;
			cout << "What file would you like to write to: ";
			getline(cin, filename);
		}
		else
		{
			cout << "--------------------" << endl;
			cout << "That is an invalid input please input y or n" << endl;
			cout << "--------------------" << endl;
		}
	}
	while (filego == true)
	{
		cout << "What would you like to write to the file?: ";
		getline(cin, text);
		cout << "you would like to write: " << text << " ?" << endl;
		cout << "(y / n)";
		cin >> ask;
		cin.ignore(1000, '\n');
		if (ask == 'y')
		{
			outfile.open(filename, ios::out);
			outfile << text;
			outfile.close();
			cout << endl << "---text has been written in file---" << endl;
			cout << "Would you like to return to the menu?(y/n): ";
			cin >> answer;
			cin.ignore(1000, '\n');
			if (answer == 'y')
			{
				break;
			}
		}
	}
}
void option4()
{

	bool answercheck = false;
	bool filego = false;
	string filename;
	char yesno, ask;
	ofstream file;
	string userinput;

	// asking for you to input a file name
	cout << "Input a file name: ";
	getline(cin, filename);

	while (answercheck == false)
	{
		cout << endl << "You want to add to " << filename << endl << "Is this correct (y/n)";
		cin >> yesno;
		cin.ignore(1000, '\n');
		if (yesno == 'y')
		{
			filego = true;
			answercheck = true;
			cout << "--------------------" << endl;
		}
		else if (yesno == 'n')
		{
			cout << "--------------------" << endl;
			cout << "What file would you like to add to: ";
			getline(cin, filename);
		}
		else
		{
			cout << "--------------------" << endl;
			cout << "That is an invalid input please input y or n" << endl;
			cout << "--------------------" << endl;
		}
	}
	while (filego == true)
	{
		cout << "What would you like to add to the file?: ";
		getline(cin, userinput);
		cout << "You would like to add " << userinput << " to the file?" << endl;
		cout << "(y/n):";
		cin >> ask;
		cin.ignore(1000, '\n');
		if (ask == 'y')
		{
			file.open(filename,ios::out|ios::app);
			if (!file)
			{
				cout << "---Error: File failed to open---";
				break;
			}
			file << userinput;
			file.close();
			cout << "---File successfully added to---" << endl;
			filego = false;
		}
	}
}
void option5()
{
	bool answercheck = false;
	bool filego = false;
	string filename,search,finding;
	char yesno, searching;
	ifstream myfile;
	

	// asking for you to input a file name
	cout << "Input a file you want to search for a word in: ";
	getline(cin, filename);

	//asking if you want to view the file name that you entered
	while (answercheck == false)
	{
		cout << endl << "You want to use " << filename << endl << "Is this correct (y/n)";
		cin >> yesno;
		cin.ignore(1000, '\n');
		if (yesno == 'y')
		{
			filego = true;
			answercheck = true;
			cout << "--------------------" << endl;
		}
		else if (yesno == 'n')
		{
			cout << "--------------------" << endl;
			cout << "What file would you like to use: ";
			getline(cin, filename);
		}
		else
		{
			cout << "--------------------" << endl;
			cout << "That is an invalid input please input y or n" << endl;
			cout << "--------------------" << endl;
		}
	}
	while (filego == true)
	{
		cout << "What word would you like to search for?: ";
		getline(cin, search);
		cout << "You would like to search for: " << search << "?(y/n)";
		cin >> searching;
		cin.ignore(1000, '\n');
		if (searching == 'y')
		{
			myfile.open(filename);
			while (getline(myfile, finding))
			{
				if (finding.find(search) != string::npos)
				{
					cout << search << " was found in " << filename << endl;
					myfile.close();
					filego = false;
					break;
				}
				else
				{
					cout << search << " was not found in " << filename << endl;
					myfile.close();
					filego = false;
					break;
				}
			}
		}
	}
}
void option6()
{
	bool answercheck = false;
	bool filego = false;
	string filename, word,replace,text;
	char yesno;
	ifstream infile;
	ofstream outfile;
	ifstream fileopen;
	ofstream fileop;
	ofstream deleted;

	// asking for you to input a file name
	cout << "Input the name for the file you would like to search: ";
	getline(cin, filename);

	//asking if you want to view the file name that you entered
	while (answercheck == false)
	{
		cout << endl << "You want to use " << filename << endl << "Is this correct (y/n)";
		cin >> yesno;
		cin.ignore(1000, '\n');
		if (yesno == 'y')
		{
			filego = true;
			answercheck = true;
			cout << "--------------------" << endl;
		}
		else if (yesno == 'n')
		{
			cout << "--------------------" << endl;
			cout << "What file would you like to use: ";
			getline(cin, filename);
		}
		else
		{
			cout << "--------------------" << endl;
			cout << "That is an invalid input please input y or n" << endl;
			cout << "--------------------" << endl;
		}
	}
	while (filego == true)
	{
		cout << "What word would you like to replace?: ";
		getline(cin, word);
		cout << endl << "What word would you like to replace it with?: ";
		getline(cin, replace);
		infile.open(filename);
		outfile.open("temp.txt",ios::out | ios::app);

		while (infile >> text)
		{
			if (text == word)
			{
				text = replace;
			}
			outfile << text;
			outfile << " ";
		}
		infile.close();
		outfile.close();
		fileop.open(filename);
		fileopen.open("temp.txt", ios::in);
		while (getline(fileopen, text))
		{
			fileop << text;
		}
		fileop.close();
		fileopen.close();
		deleted.open("temp.txt", ios::out);
		deleted.close();
		filego = false;
		cout << "---Word was replaced---" << endl;
		break;

	}
}
int main()
{
	bool leave = false;
	int option;
	while (leave == false)
	{
		cout <<"--------------------" << endl << endl;
		cout << "1.View contents of a text file" << endl;
		cout << "2.Create a new text file" << endl;
		cout << "3.Write text to a text file" << endl;
		cout << "4.Add to a text file" << endl;
		cout << "5.Search for a word in a text file" << endl;
		cout << "6.Replace an existing word in a text file" << endl;
		cout << "7.Exit the program" << endl << endl;
		cout << "--------------------" << endl;
		cout << "What would you like to do? (#):";
		cin >> option;
		cin.ignore(1000, '\n');
		cout << "--------------------" << endl;
		if (option == 1)
		{
			option1();
		}
		else if (option == 2)
		{
			option2();
		}
		else if (option == 3)
		{
			option3();
		}
		else if (option == 4)
		{
			option4();
		}
		else if (option == 5)
		{
			option5();
		}
		else if (option == 6)
		{
			option6();
		}
		else if (option == 7)
		{
			cout << "---Goodbye---";
			return 0;
		}
		else
		{
			cout << "That is not a valid input please input a different value (#): ";
			cin >> option;
			cin.ignore(1000, '\n');
			cout << "--------------------"<<endl;
		}
	}
}