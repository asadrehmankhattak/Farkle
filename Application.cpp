#include <string>
#include <iostream>
#include "Player.h"
#include "Dice.h"

using namespace std;

Player player;
Dice dice1, dice2, dice3, dice4, dice5, dice6;
int farkle = 0;

// method to check counting triplets on 6 dices rolled
int countingTriplets(int numberOf_one, int numberOf_two, int numberOf_three, int numberOf_four, int numberOf_five, int numberOf_six) {
	int numberOf_triplet = 0;

	if (numberOf_one == 3) {
		numberOf_triplet++;
	}
	if (numberOf_two == 3) {
		numberOf_triplet++;
	}
	if (numberOf_three == 3) {
		numberOf_triplet++;
	}
	if (numberOf_four == 3) {
		numberOf_triplet++;
	}
	if (numberOf_five == 3) {
		numberOf_triplet++;
	}
	if (numberOf_six == 3) {
		numberOf_triplet++;
	}

	if (numberOf_triplet == 2) {
		return 2500;
	}
	return 0;
}
// method to check two triplets on 6 dices rolled
int twoTriplets(string dices) {
	int numberOf_one = 0, numberOf_two = 0, numberOf_three = 0, numberOf_four = 0, numberOf_five = 0, numberOf_six = 0;

	for (int iterVar = 0; iterVar < dices.length(); iterVar++) {

		if (dices[iterVar] == '1') {
			numberOf_one++;
		}
		else if (dices[iterVar] == '2') {
			numberOf_two++;
		}
		else if (dices[iterVar] == '3') {
			numberOf_three++;
		}
		else if (dices[iterVar] == '4') {
			numberOf_four++;
		}
		else if (dices[iterVar] == '5') {
			numberOf_five++;
		}
		else if (dices[iterVar] == '6') {
			numberOf_six++;
		}
	}

	return countingTriplets(numberOf_one, numberOf_two, numberOf_three, numberOf_four, numberOf_five, numberOf_six);
}
// method to check pair with four on 6 dices rolled
int pairWithFour(int numberOf_one, int numberOf_two, int numberOf_three, int numberOf_four, int numberOf_five, int numberOf_six) {
	int numberOf_pair = 0;

	if (numberOf_one == 2) {
		numberOf_pair++;
	}
	if (numberOf_two == 2) {
		numberOf_pair++;
	}
	if (numberOf_three == 2) {
		numberOf_pair++;
	}
	if (numberOf_four == 2) {
		numberOf_pair++;
	}
	if (numberOf_five == 2) {
		numberOf_pair++;
	}
	if (numberOf_six == 2) {
		numberOf_pair++;
	}
	return numberOf_pair;
}
// method to check four with pair on 6 dices rolled
int checkFourWithPair(int numberOf_one, int numberOf_two, int numberOf_three, int numberOf_four, int numberOf_five, int numberOf_six) {
	int numberOf_have_four = 0, numberOf_pair = 0;

	if (numberOf_one == 4) {
		numberOf_have_four++;
	}
	if (numberOf_two == 4) {
		numberOf_have_four++;
	}
	if (numberOf_three == 4) {
		numberOf_have_four++;
	}
	if (numberOf_four == 4) {
		numberOf_have_four++;
	}
	if (numberOf_five == 4) {
		numberOf_have_four++;
	}
	if (numberOf_six == 4) {
		numberOf_have_four++;
	}

	numberOf_pair = pairWithFour(numberOf_one, numberOf_two, numberOf_three, numberOf_four, numberOf_five, numberOf_six);

	if (numberOf_have_four == 1 && numberOf_pair == 1) {
		return 1500;
	}

	return 0;

}
// method to check four pairs on 6 dices rolled
int fourWithPair(string dices) {
	int numberOf_one = 0, numberOf_two = 0, numberOf_three = 0, numberOf_four = 0, numberOf_five = 0, numberOf_six = 0;

	for (int iterVar = 0; iterVar < dices.length(); iterVar++) {
		if (dices[iterVar] == '1') {
			numberOf_one++;
		}
		else if (dices[iterVar] == '2') {
			numberOf_two++;
		}
		else if (dices[iterVar] == '3') {
			numberOf_three++;
		}
		else if (dices[iterVar] == '4') {
			numberOf_four++;
		}
		else if (dices[iterVar] == '5') {
			numberOf_five++;
		}
		else if (dices[iterVar] == '6') {
			numberOf_six++;
		}
	}
	return checkFourWithPair(numberOf_one, numberOf_two, numberOf_three, numberOf_four, numberOf_five, numberOf_six);
}
// method to check three pairs on 6 dices rolled
int checkThreePairs(int numberOf_one, int numberOf_two, int numberOf_three, int numberOf_four, int numberOf_five, int numberOf_six) {
	int numberOf_pairs = 0;

	if (numberOf_one == 2) {
		numberOf_pairs++;
	}
	if (numberOf_two == 2) {
		numberOf_pairs++;
	}
	if (numberOf_three == 2) {
		numberOf_pairs++;
	}
	if (numberOf_four == 2) {
		numberOf_pairs++;
	}
	if (numberOf_five == 2) {
		numberOf_pairs++;
	}
	if (numberOf_six == 2) {
		numberOf_pairs++;
	}

	if (numberOf_pairs == 3) {
		return 1500;
	}

	return 0;
}


// method to check all numbers on 6 dices rolled
int allNumbers(string dices) {
	int numberOf_one = 0, numberOf_two = 0, numberOf_three = 0, numberOf_four = 0, numberOf_five = 0, numberOf_six = 0;

	for (int iterVar = 0; iterVar < dices.length(); iterVar++) {
		if (dices[iterVar] == '1') {
			numberOf_one++;
		}
		else if (dices[iterVar] == '2') {
			numberOf_two++;
		}
		else if (dices[iterVar] == '3') {
			numberOf_three++;
		}
		else if (dices[iterVar] == '4') {
			numberOf_four++;
		}
		else if (dices[iterVar] == '5') {
			numberOf_five++;
		}
		else if (dices[iterVar] == '6') {
			numberOf_six++;
		}
	}
	if (numberOf_one == 1 && numberOf_two == 1 && numberOf_three == 1 && numberOf_four == 1 && numberOf_five == 1 && numberOf_six == 1) {
		return 1500;
	}

	return 0;
}
// method to check six of a kind on 6 dices rolled
int sixOfKind(string dices) {
	int numberOf_one = 0, numberOf_two = 0, numberOf_three = 0, numberOf_four = 0, numberOf_five = 0, numberOf_six = 0;

	for (int iterVar = 0; iterVar < dices[iterVar]; iterVar++) {
		if (dices[iterVar] == '1') {
			numberOf_one++;
		}
		else if (dices[iterVar] == '2') {
			numberOf_two++;
		}
		else if (dices[iterVar] == '3') {
			numberOf_three++;
		}
		else if (dices[iterVar] == '4') {
			numberOf_four++;
		}
		else if (dices[iterVar] == '5') {
			numberOf_five++;
		}
		else if (dices[iterVar] == '6') {
			numberOf_six++;
		}
	}

	if (numberOf_one == 6 || numberOf_two == 6 || numberOf_three == 6 || numberOf_four == 6 || numberOf_five == 6 || numberOf_six == 6) {
		return 3000;
	}

	return 0;
}
// method to check five of a kind on 6 dices rolled
int fiveOfKind(string dices) {
	int numberOf_one = 0, numberOf_two = 0, numberOf_three = 0, numberOf_four = 0, numberOf_five = 0, numberOf_six = 0;

	for (int iterVar = 0; iterVar < dices.length(); iterVar++) {
		if (dices[iterVar] == '1') {
			numberOf_one++;
		}
		else if (dices[iterVar] == '2') {
			numberOf_two++;
		}
		else if (dices[iterVar] == '3') {
			numberOf_three++;
		}
		else if (dices[iterVar] == '4') {
			numberOf_four++;
		}
		else if (dices[iterVar] == '5') {
			numberOf_five++;
		}
		else if (dices[iterVar] == '6') {
			numberOf_six++;
		}
	}

	if (numberOf_one == 5 || numberOf_two == 5 || numberOf_three == 5 || numberOf_four == 5 || numberOf_five == 5 || numberOf_six == 5) {
		return 2000;
	}

	return 0;
}
// method to check four of a kind on 6 dices rolled
int fourOfKind(string dices) {
	int numberOf_one = 0, numberOf_two = 0, numberOf_three = 0, numberOf_four = 0, numberOf_five = 0, numberOf_six = 0;

	for (int iterVar = 0; iterVar < dices.length(); iterVar++) {
		if (dices[iterVar] == '1') {
			numberOf_one++;
		}
		else if (dices[iterVar] == '2') {
			numberOf_two++;
		}
		else if (dices[iterVar] == '3') {
			numberOf_three++;
		}
		else if (dices[iterVar] == '4') {
			numberOf_four++;
		}
		else if (dices[iterVar] == '5') {
			numberOf_five++;
		}
		else if (dices[iterVar] == '6') {
			numberOf_six++;
		}
	}

	if (numberOf_one == 4 || numberOf_two == 4 || numberOf_three == 4 || numberOf_four == 4 || numberOf_five == 4 || numberOf_six == 4) {
		return 1000;
	}

	return 0;
}
// method to check three of a kind on 6 dices rolled
int checkThreeOfKind(int numberOf_one, int numberOf_two, int numberOf_three, int numberOf_four, int numberOf_five, int numberOf_six) {

	if (numberOf_one == 3 || numberOf_three == 3) {
		return 300;
	}

	else if (numberOf_two == 3) {
		return 200;
	}

	else if (numberOf_four == 3) {
		return 400;
	}

	else if (numberOf_five == 3) {
		return 500;
	}

	else if (numberOf_six == 3) {
		return 600;
	}

	return 0;
}

int threeOfKind(string dices) {
	int numberOf_one = 0, numberOf_two = 0, numberOf_three = 0, numberOf_four = 0, numberOf_five = 0, numberOf_six = 0;
	for (int iterVar = 0; iterVar < dices.length(); iterVar++) {
		if (dices[iterVar] == '1') {
			numberOf_one++;
		}
		else if (dices[iterVar] == '2') {
			numberOf_two++;
		}
		else if (dices[iterVar] == '3') {
			numberOf_three++;
		}
		else if (dices[iterVar] == '4') {
			numberOf_four++;
		}
		else if (dices[iterVar] == '5') {
			numberOf_five++;
		}
		else if (dices[iterVar] == '6') {
			numberOf_six++;
		}
	}

	return checkThreeOfKind(numberOf_one, numberOf_two, numberOf_three, numberOf_four, numberOf_five, numberOf_six);

}
// method to check singles on 6 dices rolled
int singles() {

	if (dice1.getDiceValue() == 1) {
		return 100;
	}
	else if (dice1.getDiceValue() == 5) {
		return 50;
	}

}
// method to check three pairs on 6 dices rolled
int threePairs(string dices) {
	int numberOf_one = 0, numberOf_two = 0, numberOf_three = 0, numberOf_four = 0, numberOf_five = 0, numberOf_six = 0;

	for (int iterVar = 0; iterVar < dices.length(); iterVar++) {
		if (dices[iterVar] == '1') {
			numberOf_one++;
		}
		else if (dices[iterVar] == '2') {
			numberOf_two++;
		}
		else if (dices[iterVar] == '3') {
			numberOf_three++;
		}
		else if (dices[iterVar] == '4') {
			numberOf_four++;
		}
		else if (dices[iterVar] == '5') {
			numberOf_five++;
		}
		else if (dices[iterVar] == '6') {
			numberOf_six++;
		}
	}

	return checkThreePairs(numberOf_one, numberOf_two, numberOf_three, numberOf_four, numberOf_five, numberOf_six);

}
// method to check combinations to see which one has the highest score. 
int checkCombination(int numberOf_single, int numberOf_three, int numberOf_four, int numberOf_five, int numberOf_six, int numberOf_all, int numberOf_three_pair, int numberOf_four_pair, int numberOf_double_trip) {
	int highestScore = 0;
	for (int iterVar = 0; iterVar < 9; iterVar++) {
		if (numberOf_single > highestScore) {
			highestScore = numberOf_single;
		}
		else if (numberOf_three > highestScore) {
			highestScore = numberOf_three;
		}
		else if (numberOf_four > highestScore) {
			highestScore = numberOf_four;
		}
		else if (numberOf_five > highestScore) {
			highestScore = numberOf_five;
		}
		else if (numberOf_six > highestScore) {
			highestScore = numberOf_six;
		}
		else if (numberOf_all > highestScore) {
			highestScore = numberOf_all;
		}
		else if (numberOf_three_pair > highestScore) {
			highestScore = numberOf_three_pair;
		}
		else if (numberOf_four_pair > highestScore) {
			highestScore = numberOf_four_pair;
		}
		else if (numberOf_double_trip > highestScore) {
			highestScore = numberOf_double_trip;
		}
	}

	return highestScore;
}
// method to get highest score from rolled dices
int highestScoreOnRolledDices(int numberOf_single, int numberOf_three, int numberOf_four, int numberOf_five, int numberOf_six, int numberOf_all, int numberOf_three_pair, int numberOf_four_pair, int numberOf_double_trip) {
	int greatest = 0;

	
	if (numberOf_single == numberOf_three && numberOf_three == numberOf_four && numberOf_four == numberOf_five && numberOf_five == numberOf_six && numberOf_six == numberOf_all && numberOf_all == numberOf_three_pair && numberOf_three_pair == numberOf_four_pair && numberOf_four_pair == numberOf_double_trip && numberOf_double_trip == 0) {
		player.setPlayerScore(0);
		farkle++;
		return 0;
	}
	
	else {
		greatest = checkCombination(numberOf_single, numberOf_three, numberOf_four, numberOf_five, numberOf_six, numberOf_all, numberOf_three_pair, numberOf_four_pair, numberOf_double_trip);
		
		return greatest;
	}

}
// method to score on rolled dices.
void scoreDice() {
	int choice;
	string dices = dice1.getDiceValue() + "" + dice2.getDiceValue() + dice3.getDiceValue() + dice4.getDiceValue() + dice5.getDiceValue() + dice6.getDiceValue();
	int single = singles();
	int three = threeOfKind(dices);
	int four = fourOfKind(dices);
	int five = fiveOfKind(dices);
	int six = sixOfKind(dices);
	int all = allNumbers(dices);
	int threePair = threePairs(dices);
	int fourPair = fourWithPair(dices);
	int doubleTrip = twoTriplets(dices);

	int greatest = highestScoreOnRolledDices(single, three, four, five, six, all, threePair, fourPair, doubleTrip);

	if (greatest > 0) {
		cout << player.getPlayerName() << "!! Highest Score available " << greatest << endl;
		cout << "Do you want to lock the Highest score dices 1-yes , 2- no : ";
		cin >> choice;

		if (choice == 1) {
			cout << "Dices are locked" << endl;
			player.addPlayerScore(greatest);
		}
	}

}
// method to show rolled dices.
void showDices() {
	cout << "\nDices Rolled => " << dice1.getDiceValue() << "  " << dice2.getDiceValue() << "  " << dice3.getDiceValue() << "  " << dice4.getDiceValue() << "  " << dice5.getDiceValue() << "  " << dice6.getDiceValue() << "  " << endl;
}
// method to ask user if wants to roll again or score on rolled dices
void rollORScore() {
	int choice;
	bool isCorrect = false;
	while (!isCorrect) {
		cout << player.getPlayerName() << "!! Do you want to score or Roll again. 1- roll again , 2-score , 3-quit" << endl;
		cin >> choice;

		if (choice == 1) {
			
			isCorrect = true;
		}
		else if (choice == 2) {
			scoreDice();
			isCorrect = true;
		}
		else if (choice == 3) {
			exit(0);
		}
		else {
			cout << player.getPlayerName() << "!! Not a valid choice" << endl;
		}
	}
}

// method to generate random 6 dices
void rollDices() {
	srand(time(NULL));
	if (dice1.canBeRolled())
		dice1.setDiceValue((rand() % 6) + 1);
	if (dice2.canBeRolled())
		dice2.setDiceValue((rand() % 6) + 1);
	if (dice3.canBeRolled())
		dice3.setDiceValue((rand() % 6) + 1);
	if (dice4.canBeRolled())
		dice4.setDiceValue((rand() % 6) + 1);
	if (dice5.canBeRolled())
		dice5.setDiceValue((rand() % 6) + 1);
	if (dice6.canBeRolled())
		dice6.setDiceValue((rand() % 6) + 1);
}
// method to ask user name
void askName() {
	string name;
	bool isCorrect = false;
	while (!isCorrect) {
		cout << "\nPlease enter your name: ";
		cin >> name;
		if (name != "") {
			player.setPlayerName(name);

			cout << "Welcome " << player.getPlayerName() << " to the Farkle";

			isCorrect = true;
		}
		else {
			cout << "Error: Name can not be empty.";
		}
	}
}
// method to start new game
void newGame() {
	player.setPlayerScore(0);
	player.setPlayerTurns(0);
}

void playGame() {
	bool playing = true;
	while (playing) {
		rollDices();
		showDices();
		rollORScore();
		player.setPlayerTurns(player.getPlayerTurns()+1); // add 1 to player turns
		if (farkle == 3) { // checking if 3 times farkle happened then player lost
			playing = false;
			cout << player.getPlayerName() + "|| You have lost the game.";
			player.setPlayerLoss(player.getPlayerLoss() + 1);
			
		}
		else if (player.getPlayerScore() >= 5000) // if user scores more than 5000 player wins
		{
			cout << player.getPlayerName() + "|| You have won the game with score "<< player.getPlayerScore() << ".";
			player.setPlayerWins(player.getPlayerWins() + 1);
			playing = false;
		}
	}
}
// method to show menu
void menu()
{
	int userInput = -1;
	bool isContinue = true;
	system("cls");
	cout << "=================" << endl;
	cout << "Welcome to Farkle" << endl;
	cout << "Roll the dice. On every turn either score on rolled dices or re roll again. 3 farkles will make you lose and crossing 5000 points will win you the game." << endl;
	cout << "=================" << endl;
	askName();
	while (isContinue) {
		cout << "\n1 - New Game" << endl;
		cout << "2 - Quit" << endl << endl;

		cout << "Please enter your choice: ";
		cin >> userInput;

		switch (userInput) {
		case 1:
			newGame();
			playGame();
			cout << "Stats:-  Wins: " << player.getPlayerWins() << " , Loss: " << player.getPlayerLoss() << endl;
			break;
		case 2:
			exit(0);
			break;
		default:
			cout << "Error: Enter a valid choice between 1-2" << endl << endl;
		}
	}
}


int main()
{
	menu();

}