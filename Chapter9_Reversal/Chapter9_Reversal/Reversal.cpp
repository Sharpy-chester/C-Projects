#include <iostream>
#include <string>
using namespace std;

bool restart = true;

int main() 
{
	while (restart) 
	{
		cout << "Enter an integer of at least 2 digits or -1 to quit:" << endl;
		string input = "";
		cin >> input;
		if (input == "-1")
		{
			cout << "Exiting" << endl;
			restart = false;
		}
		else if (input.length() > 1 && input.length() < 11) 
		{
			string reversed = "";
			for (int i = 0; i < input.length(); i++) 
			{
				int x = input.length() - i;
				string replace = input.substr(x - 1, 1);
				reversed.insert(i, replace, 0, 1);

			}
			cout << "Your integer reversed is: " << reversed << endl;
		}
		else 
		{
			cout << "Your input is invalid. Please try again" << endl;
		}
	}

	cin.get();
	cin.get();
	return 0;
}