#include <iostream>
using namespace std;

int oddNum = 0;
int evenNum = 0;
int oddAdd = 0;
int evenAdd = 0;
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);

int main() 
{
	for (int i = 0; i < 10; i++) 
	{

		cout << "Please input a number" << endl;
		int thisNum = 0;
		cin >> thisNum;
		if (thisNum % 2 == 0) 
		{
			evenAdd += thisNum;
			evenNum++;
		}
		else 
		{
			oddAdd += thisNum;
			oddNum++;
		}
		cout << "Even: " << evenNum << "   Odd: " << oddNum << endl;
		cout << endl;
		cout << endl;
		
	}
	outputResults(oddNum, oddAdd, evenNum, evenAdd);
	cin.get();
	cin.get();
	return 0;


}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal) 
{
	cout << endl;
	cout << "Overall, there were " << numOfEven << " even numbers which added up to " << evenTotal << endl;
	cout << "and " << numOfOdd << " odd numbers which added up to " << oddTotal << endl;
}