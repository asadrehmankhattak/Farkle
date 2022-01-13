#include "Player.h"

using namespace std;

Player::Player()
{
	this->player_name = "";
	this->player_score = 0;
	this->player_turns = 0;
}

string Player::getPlayerName()
{
	return this->player_name;
}

int Player::getPlayerScore()
{
	return this->player_score;
}

int Player::getPlayerTurns()
{
	return this->player_turns;
}

int Player::getPlayerWins()
{
	return this->player_wins;
}

int Player::getPlayerLoss()
{
	return this->player_loss;
}

void Player::setPlayerName(string name)
{
	this->player_name = name;
}

void Player::setPlayerTurns(int turns)
{
	this->player_turns = turns;
}

void Player::setPlayerScore(int score)
{
	this->player_score = score;
}


void Player::addPlayerScore(int value)
{
	this->player_score = this->player_score + value;
}

void Player::setPlayerWins(int wins)
{
	this->player_wins = wins;
}

void Player::setPlayerLoss(int loss)
{
	this->player_loss = loss;
}
