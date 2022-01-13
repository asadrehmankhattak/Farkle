#pragma once
#include <string>

using namespace std;

class Player
{
	private:
		string player_name;
		int player_score;
		int player_turns;
		int player_wins;
		int player_loss;
	public:
		Player();
		string getPlayerName();
		int getPlayerScore();
		int getPlayerTurns();
		int getPlayerWins();
		int getPlayerLoss();
		void setPlayerName(string name);
		void setPlayerTurns(int turns);
		void setPlayerScore(int score);
		void addPlayerScore(int value);
		void setPlayerWins(int wins);
		void setPlayerLoss(int loss);

};

