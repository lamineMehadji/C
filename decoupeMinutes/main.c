#include "decoupeMinutes.h"

int main(int argc, char const *argv[])
{
	int	heures;
	int	minutes;

	heures = 0;
	minutes = 90;

	decoupeMinutes(&heures, &minutes);
	printf("%d heures et %d minutes\n", heures, minutes);
	return 0;
}
