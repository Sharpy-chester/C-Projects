#include <iostream>
#include <string>
using namespace std;

void comma2blank(char* textToChange);

int main() 
{
	cout << "Please enter some text with a comma or more in." << endl;
	char userInput[30];
	cin.getline(userInput, 30);
	cout << "BEFORE comma2blank: " << userInput << endl;
	for (int i = 0; i < sizeof(userInput); i++) 
	{
		comma2blank(&userInput[i]);
	}
	cout << "AFTER comma2blank: " << userInput << endl;
	cin.get();
	cin.get();
	cin.get();
	cin.get();
	return 0;
}

void comma2blank (char* textToChange) 
{
	if (*textToChange == ',') 
	{
		*textToChange = ' ';
	}
}