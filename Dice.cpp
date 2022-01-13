#include "Dice.h"
#include <iostream>

Dice::Dice()
{
	dice_beRolled = true;
	dice_value = 0;
	for (int iterI = 0; iterI < 9; iterI++) {
		for (int iterJ = 0; iterJ < 9; iterJ++) {
			if (iterI == 0 || iterJ == 0 || iterI == 8 || iterJ == 8)
				dice_visualRep += "*";
			else
				dice_visualRep += " ";
		}
		dice_visualRep += "\n";
	}
}

int Dice::getDiceValue()
{
	return this->dice_value;
}

bool Dice::canBeRolled()
{
	return this->dice_beRolled;
}

void Dice::setDiceValue(int value)
{
	this->dice_value = value;
	dice_visualRep = "";
	if (value == 1) {
		
		for (int iterI = 0; iterI < 10; iterI++) {
			for (int iterJ = 0; iterJ < 10; iterJ++) {
				if (iterI == 4 && iterJ==4 )
					dice_visualRep += "=";
				else if (iterI == 0 || iterJ == 0 || iterI == 9 || iterJ == 9)
					dice_visualRep += "*";
				else
					dice_visualRep += " ";
			}
			dice_visualRep += "\n";
		}
	}else if (value == 2) {
		for (int iterI = 0; iterI < 10; iterI++) {
			for (int iterJ = 0; iterJ < 10; iterJ++) {
				if ((iterI == 2 && iterJ == 4) || (iterI == 6 && iterJ == 4))
					dice_visualRep += "=";
				else if (iterI == 0 || iterJ == 0 || iterI == 9 || iterJ == 9)
					dice_visualRep += "*";
				else
					dice_visualRep += " ";
			}
			dice_visualRep += "\n";
		}
	}
	else if (value == 3) {
		for (int iterI = 0; iterI < 10; iterI++) {
			for (int iterJ = 0; iterJ < 10; iterJ++) {
				if ((iterI == 2 && iterJ == 4) || (iterI == 4 && iterJ == 4) || (iterI == 6 && iterJ == 4))
					dice_visualRep += "=";
				else if (iterI == 0 || iterJ == 0 || iterI == 9 || iterJ == 9)
					dice_visualRep += "*";
				else
					dice_visualRep += " ";
			}
			dice_visualRep += "\n";
		}
	}

	else if (value == 4) {
		for (int iterI = 0; iterI < 10; iterI++) {
			for (int iterJ = 0; iterJ < 10; iterJ++) {
				if ((iterI == 2 && iterJ == 3) || (iterI == 2 && iterJ == 6) || (iterI == 6 && iterJ == 3) || (iterI == 6 && iterJ == 6))
					dice_visualRep += "=";
				else if (iterI == 0 || iterJ == 0 || iterI == 9 || iterJ == 9)
					dice_visualRep += "*";
				else
					dice_visualRep += " ";
			}
			dice_visualRep += "\n";
		}
		
	}
	else if (value == 5) {
		for (int iterI = 0; iterI < 10; iterI++) {
			for (int iterJ = 0; iterJ < 10; iterJ++) {
				if ((iterI == 2 && iterJ == 3) || (iterI == 2 && iterJ == 6) || (iterI == 6 && iterJ == 3) || (iterI == 6 && iterJ == 6) || (iterI == 4 && iterJ == 4))
					dice_visualRep += "=";
				else if (iterI == 0 || iterJ == 0 || iterI == 9 || iterJ == 9)
					dice_visualRep += "*";
				else
					dice_visualRep += " ";
			}
			dice_visualRep += "\n";
		}
	}
	else if (value == 6) {
		for (int iterI = 0; iterI < 10; iterI++) {
			for (int iterJ = 0; iterJ < 10; iterJ++) {
				if ((iterI == 2 && iterJ == 3) || (iterI == 2 && iterJ == 6) || (iterI == 6 && iterJ == 3) || (iterI == 6 && iterJ == 6) || (iterI == 4 && iterJ == 3) || (iterI == 4 && iterJ == 6))
					dice_visualRep += "=";
				else if (iterI == 0 || iterJ == 0 || iterI == 9 || iterJ == 9)
					dice_visualRep += "*";
				else
					dice_visualRep += " ";
			}
			dice_visualRep += "\n";
		}
	}
}

void Dice::setBeRolled(bool beRolled)
{
	this->dice_beRolled = beRolled;
}

string Dice::getDiceVisualRep()
{
	return dice_visualRep;
}
