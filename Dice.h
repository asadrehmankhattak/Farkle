#pragma once
#include <string>

using namespace std;

class Dice
{
private:
	int dice_value;
	string dice_visualRep;
	bool dice_beRolled;

public:
	Dice();
	int getDiceValue();
	bool canBeRolled();

	void setDiceValue(int value);
	void setBeRolled(bool beRolled);
	string getDiceVisualRep();

};

