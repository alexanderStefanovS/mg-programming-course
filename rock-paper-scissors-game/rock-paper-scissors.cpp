#include <iostream>

using namespace std;

char generateComputerElement() {
	int randomNumber = rand() % 3 + 1;

	switch (randomNumber) {
		case 1: 
			return 'R';
		case 2:
			return 'P';
		case 3:
			return 'S';
	}
}

void printElementName(char element) {
	switch (element) {
		case 'R':
			cout << "ROCK";
			break;
		case 'P':
			cout << "PAPER";
			break;
		case 'S':
			cout << "SCISSORS";
			break;
	}
}

int calculateRoundResult(char playerElement, char computerElement) {
	if (playerElement == computerElement) {
		return 0;
	}

	if (playerElement == 'P' && computerElement == 'S' || playerElement == 'S' && computerElement == 'R' || playerElement == 'R' && computerElement == 'P') {
		return -1;
	}
	
	return 1;
}

void game() {
	cout << "\n*** ROCK, PAPER, SCISSORS game! ***\n\n";

	int totalPoints;

	cout << "Enter the number of game points: ";
	cin >> totalPoints;

	cout << "\n\n-------------- THE GAME STARTED --------------\n\n";

	int playerPoints = 0;
	int computerPoints = 0;

	while (true) {
		char playerElement;

		cout << "Enter an element (R, P or S): ";
		cin >> playerElement;

		char computerElement = generateComputerElement();

		int roundResult = calculateRoundResult(playerElement, computerElement);

		cout << "\nYou chose ";
		printElementName(playerElement);
		cout << ". The computer chose ";
		printElementName(computerElement); cout << ".\n";

		if (roundResult == 0) {
			cout << "The round is DRAW! The result is: " << playerPoints << " - " << computerPoints << "\n\n";
		}
		else if (roundResult == 1) {
			playerPoints++;

			cout << "You WIN the round! The result is: " << playerPoints << " - " << computerPoints << "\n\n";
		}
		else {
			computerPoints++;

			cout << "You LOST the round! The result is: " << playerPoints << " - " << computerPoints << "\n\n";
		}

		if (playerPoints >= totalPoints && playerPoints > computerPoints) {
			cout << "\nYou WIN the game! The result is: " << playerPoints << " - " << computerPoints << "! :D";
			break;
		}

		if (computerPoints >= totalPoints && computerPoints > playerPoints) {
			cout << "\nYou LOST the game! The result is: " << playerPoints << " - " << computerPoints << "! :'(";
			break;
		}
	}

	cout << "\n\n----------------- GAME OVER -----------------\n\n";
}

int main() {

	while (true) {

		game();

		char playAgain;
		cout << "Do you want to play again ? (Y or N) : ";
		cin >> playAgain;

		cout << "---------------------------------------------\n";

		if (playAgain != 'Y') {
			break;
		}
	}

	return 0;
}

