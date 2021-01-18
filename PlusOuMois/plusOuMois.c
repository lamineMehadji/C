#include "plusOuMois.h"

int	niveaux()
{
	int choix;
	int max;

	max = 0;
	choix = 0;
	printf("==== Niveaux ====\n");
	printf("1 : entre 1 et 100\n");
	printf("2 : entre 1 et 1000\n");
	printf("3 : entre 1 et 10000\n");
	printf("Votre choix : ");
	scanf("%d", &choix);
	switch (choix)
	{
		case 1:
			max = 100;
			break;
		case 2:
			max = 1000;
			break;
		case 3:
			max = 10000;
			break;
		default:
			printf("Choix incorrecte\n");
			return (niveaux());
			break;
	}
	return (max);
}

int mysteryNumber(int max)
{
	int number;

	srand(time(NULL));
	number = (rand() % (max - 1 + 1)) + 1;
	return (number);
}

void plusOuMois(int number, int coups)
{ 
	int	numberUser;
	int	faux;

	coups++;
	printf("Quel est le nombre ? ");
	scanf("%d", &numberUser);

	faux = number != numberUser;
	if (faux)
	{
		if (number > numberUser)
			printf("C'est plus !\n");
		else
			printf("C'est mois !\n");

		return (plusOuMois(number, coups));
	}
	else
		printf("Bravo, vous avez trouvé le nombre mystère en %d coups\n", coups);

	partie();
}

void partie()
{
	int newPart;

	printf("1. nouvelle partie\n");
	printf("0. arreter maintenant\n");
	printf("Quel est votre choix : ");
	scanf("%d", &newPart);
	switch (newPart)
	{
		case 0:
			return;
		case 1:
			plusOuMois(mysteryNumber(niveaux()), 0);
			break;
		default:
			printf("Choix incorrecte\n");
			break;
	}
}
