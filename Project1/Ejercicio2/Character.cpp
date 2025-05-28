#include "Character.h"
#include "AwesomeLibrary.h"

void Character::Draw()
{
	if (isActive)
	{
		goToCoordinates(posX, posY);
		cout << "  O  ";
		goToCoordinates(posX, posY + 1);
		cout << " /|\ ";
		goToCoordinates(posX, posY + 2);
		cout << " / \ ";
	}
	else
	{
		goToCoordinates(posX, posY);
		cout << "      ";
		goToCoordinates(posX, posY + 1);
		cout << "      ";
		goToCoordinates(posX, posY + 2);
		cout << "      ";
	}
}



