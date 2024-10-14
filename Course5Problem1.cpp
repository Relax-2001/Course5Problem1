#include <iostream>

using namespace std;

void PrintHeader()
{

	cout << "\n\t\t\tMultiplication Table From 1 To 10\n\n";

	cout << "\t";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}

	cout << "\n____________________________________________________________________________________\n";
}

string Seperator(int Number)
{
	if (Number < 10)
		return "  |   ";
	else
		return " |   ";
}

void PrintMultiplcationTable()
{
	PrintHeader();

	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << Seperator(i);
		
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}

		cout << "\n";
	}

}

int main()
{

	PrintMultiplcationTable();

	return 0;
}

