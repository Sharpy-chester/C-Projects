#include <iostream>
using namespace std;



int main() 
{
	char originalBoard[2][5] = { { 'a', 'b', 'c', 'd', 'e' },{ 'f', 'g', 'h', 'i', 'j' } };
	char board[2][5] = { {'a', 'b', 'c', 'd', 'e'}, {'f', 'g', 'h', 'i', 'j'} };
	char cardNum[2][5] = { { '5', '3', '4', '3', '2' },{ '2', '4', '1', '5', '1' } };
	bool boardComplete = false;
	while (boardComplete == false) 
	{

		
		for (int x = 0; x < 2; x++) 
		{
			cout << endl;
			for (int y = 0; y < 5; y++)
			{
				cout << "[" << board[x][y] << "]";
			

			}
		}
		cout << endl;
		cout << "Please enter the letter of the first card you want to choose" << endl;
		char userCard1 = 0;
		cin >> userCard1;


		cout << "Please enter the letter of the second card you want to choose" << endl;
		char userCard2 = 0;
		cin >> userCard2;
		
		bool found = false;
		int onex = 0, oney = 0, twox = 0, twoy = 0;

		for (int x = 0; x < 2; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				if (board[x][y] == userCard1) 
				{
					onex = x;
					oney = y;
					board[x][y] = cardNum[x][y];
				
				}
				else if (board[x][y] == userCard2) 
				{
					twox = x;
					twoy = y;
					board[x][y] = cardNum[x][y];
				}

			}
		}
		if (cardNum[onex][oney] == cardNum[twox][twoy]) 
		{

		}
		else 
		{
			board[onex][oney] = originalBoard[onex][oney];
			board[twox][twoy] = originalBoard[twox][twoy];
		}
		bool anyLeft = false;
		for (int x = 0; x < 2; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				if (board[x][y] == originalBoard[x][y]) 
				{
					anyLeft = true;
				}
				
				
			}
		}
		if (anyLeft == false) 
		{
			boardComplete = true;
		}
		system("CLS");
		
	}
	cout << "Game completed. You Win!" << endl;
	
	

	cin.get();
	cin.get();
	return 0;
}