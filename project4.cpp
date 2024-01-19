#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class stack
{
	long double numstack[1000] = {};
	char opstack[999] = {};
	int head1; //top of numstack
	int head2; //top of opstack
public:
	stack()
	{
		head1 = 0;
		head2 = 0;
	}
	void pushnum(double num)//push number to the number stack
	{
		numstack[head1] = num;
		head1++;
	}
	void pushop(char op)//push operator to the operator stack
	{
		opstack[head2] = op;
		head2++;
	}
	double popnum() // get me the element at the top of the number stack
	{
		head1--;
		return numstack[head1];
	}
	char popop() // get me the element at the top of the number stack
	{
		if (head2 == 0)
		{
			return '#';
		}
		head2--;
		return opstack[head2];
	}

};
class calculator
{
	string exp;
	double f_result = 0;
public:
	
	void readexp(string userexp)
	{
		exp = userexp;
	}
	void compute()
	{
		double num = 0;
		char expr;
		stack stack1;
		//cycles through and sends the values to the arrays
		for (int i = 0; i < exp.length(); i++)
		{
			if (exp[i] != ' ' && exp[i] != '*' && exp[i] != '%' && exp[i] != '/' && exp[i] != '-' && exp[i] != '+')
			{
				num = num * 10 + (exp[i] - 48);
			}
			else if (exp[i] != ' ')
			{
				expr = exp[i];
				stack1.pushop(expr);
				stack1.pushnum(num);
				num = 0;
			}
		}
		if (num > 0)
		{
			stack1.pushnum(num);
			num = 0;
		}
		double num2;
		char op = ' ';
		double inter_result;
		//does the equations
		inter_result = stack1.popnum();
		while (op != '#' && op != '@')
		{
			num2 = stack1.popnum();
			op = stack1.popop();
			if (op == '+')
			{
				inter_result = (num2 + inter_result);
			}
			else if (op == '-')
			{
				inter_result = (num2 - inter_result);
			}
			else if (op == '*')
			{
				inter_result = (num2 * inter_result);
			}
			else if (op == '/')
			{

				inter_result = (num2 / inter_result);
			}
			else if (op == '%')
			{
				inter_result = ((int)num2 % (int)inter_result);
			}
		}
		f_result = inter_result;

		
	}
	double result()
	{
		return f_result;
	}
};

int main()
{
	string userexp;
	string userleave;
	bool userleft = false;
	while (userleft == false)
	{
		int number_of_digits;
		//ask user for input
		std::cout << "Enter an expression to evaluate: ";
		getline(cin, userexp);

		calculator calc1;
		calc1.readexp(userexp);
		calc1.compute();
		cout << calc1.result();
		cout <<endl<< "would you like to leave?(y/n)";
		getline(cin, userleave);

		if (userleave == "y")
		{
			userleft = true;
		}
		else if (userleave == "n")
		{
			userleft = false;
		}
	}
}