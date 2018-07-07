#include <iostream>

using namespace std;

int main()
{
	int i;
	int j;
	bool keepgoing = true;
	int answer;

	while (keepgoing)
	{
		cout << "Enter a number: ";
		cin >> i;
		cout << "You entered " << i << "." << endl << "Enter another number: ";
		cin >> j;

		if (i < j)
		{
			cout << "The first number, " << i << ", is less than the second number, " << j << "." << endl;
		}
		else
		{
			cout << "The first number, " << i << ", is not less than the second number, " << j << "." << endl;
		}
		if (i == j)
		{
			cout << "The first number, " << i << ", is equal to the second number, " << j << "." << endl;
		}
		if (i > j)
		{
			cout << "The first number, " << i << ", is greater than the second number, " << j << "." << endl;
		}
		cout << "Type 0 to stop or type any other nomber to continue: ";
		cin >> answer;
		if (answer == 0)
		{
			keepgoing = false;
		}
		else
		{
			keepgoing = true;
		}
	}
	return 0;
}
