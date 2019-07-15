#include <iostream>
using namespace std;

void SizeCheck(int num1, int num2);
bool again = true;

int main()
{
	while (again) {
		int num1, num2;
		cout << "Input a number" << endl;
		cin >> num1;
		cout << "Input another number" << endl;
		cin >> num2;
		SizeCheck(num1, num2);
		cout << "Want to play again? (y or n)" << endl;
		char yOrN;
		cin >> yOrN;
		if (yOrN == 'y') 
		{
			again = true;
		}
		else 
		{
			again = false;
		}
		
	}
	cin.get();
	cin.get();
	return 0;
}

void SizeCheck(int num1, int num2) 
{
	if (num1 > num2) 
	{
		cout << num1 << " is a larger number than " << num2 << endl;
	}
	else if (num1 == num2) 
	{
		cout << "They're both the same number!" << endl;
	}
	else 
	{
		cout << num2 << " is a larger number than " << num1 << endl;
	}
}