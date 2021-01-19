#include "decoupeMinutes.h"

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
	*pointeurHeures = *pointeurMinutes / 60;
	*pointeurMinutes = *pointeurMinutes % 60;
}
