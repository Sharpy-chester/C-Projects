#include <iostream>
#include <string>
using namespace std;

bool repeat = true;
int playerPoints = 0;
int compPoints = 0;

int main() 
{
	while (playerPoints < 3 && compPoints < 3) {
		int randomNum = rand() % 3;
		cout << "Rock, Paper, or Scissors?" << endl;
		string playerChoice = "";
		cin >> playerChoice;
		if (playerChoice == "Rock" || playerChoice == "Paper" || playerChoice == "Scissors" || playerChoice == "rock" || playerChoice == "paper" || playerChoice == "scissors")
		{
			
			string compChoice = "";
			if (randomNum == 0) 
			{
				compChoice = "Rock";
				cout << "The computer chose: " << compChoice << endl;
				if (playerChoice == "Paper" || playerChoice == "paper") 
				{
					cout << "You Win!" << endl;
					playerPoints++;
				}
				if (playerChoice == "Scissors" || playerChoice == "scissors")
				{
					cout << "You Lose!" << endl;
					compPoints++;
				}
				if (playerChoice == "Rock" || playerChoice == "rock")
				{
					cout << "Thats a draw!" << endl;
				}
			}
			else if (randomNum == 1)
			{
				compChoice = "Paper";
				cout << "The computer chose: " << compChoice << endl;
				if (playerChoice == "Paper" || playerChoice == "paper")
				{
					cout << "Thats a draw!" << endl;
				}
				if (playerChoice == "Scissors" || playerChoice == "Scissors")
				{
					cout << "You Win!" << endl;
					playerPoints++;
				}
				if (playerChoice == "Rock" || playerChoice == "rock")
				{
					cout << "You Lose!" << endl;
					compPoints++;
				}
			}
			else if (randomNum == 2)
			{
				compChoice = "Scissors";
				cout << "The computer chose: " << compChoice << endl;
				if (playerChoice == "Paper" || playerChoice == "paper")
				{
					cout << "You Lose!" << endl;
					compPoints++;
				}
				if (playerChoice == "Scissors" || playerChoice == "scissors")
				{
					cout << "Thats a draw!" << endl;
				}
				if (playerChoice == "Rock" || playerChoice == "rock")
				{
					cout << "You Win!" << endl;
					playerPoints++;
				}
			}
			cout << "You need " << 3 - playerPoints << " points to win." << endl;
			cout << "The computer needs " << 3 - compPoints << " points to win." << endl;
			cout << "************************" << endl;
		}
		else 
		{
			cout << "Please enter a valid input" << endl;
		}
	}
	if (playerPoints == 3) 
	{
		cout << "Congratulations, you win!" << endl;
		cout << "Game Over" << endl;
	}
	else if (compPoints == 3) 
	{
		cout << "The computer wins!" << endl;
		cout << "Game Over" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}