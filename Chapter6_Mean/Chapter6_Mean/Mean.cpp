#include <iostream>
using namespace std;

int userNumber1 = 1;
int userNumber2 = 1;

int main()
{
	cout << "Please enter a number" << endl;
	cin >> userNumber1;
	while (userNumber2 > 0) {
		cout << "Please enter another number" << endl;
		cin >> userNumber2;
		if (userNumber1 == 0 || userNumber2 == 0)
		{
			cout << "Exiting..." << endl;
			break;
		}
		int result = userNumber1 + userNumber2;
		cout << userNumber1 << " + " << userNumber2 << " = " << result << endl;
		cout << result << " / 2 = " << result / 2 << endl;
		userNumber1 = (userNumber1 + userNumber2) / 2;		
		cout << "The mean of the two numbers is: " << userNumber1 << endl;
		cin.get();
	}
	return 0;
}