#include "pendu.h"

char lireCaractere() 
{ 
    char caractere = 0;
 
    caractere = getchar();
    caractere = toupper(caractere);
    while (getchar() != '\n') ;
 
    return caractere;
}

void pendu(char* str)
{
	char*	word;
	char	user;
	bool	lettre;
	int		coups;
	int		size;
	int		i;

	coups = 10;
	size = strlen(str);
	word = malloc(sizeof(str));
	printf("Bienvenue dans le Pendu !\n\n");

	i = -1;
	while (size > ++i)
		*(word + i) = '*';

	while (strcmp(str, word) && coups > 0)
	{
		printf("Il vous reste %d coups a jouer\n", coups);
		printf("Quel est le mot secret ? %s\n", word);
		printf("Proposez une lettre : ");
		user = lireCaractere();
		printf("\n");
		lettre = false;

		i = -1;
		while (size > ++i)
			if (*(str + i) == user)
			{
				*(word + i) = *(str + i);
				lettre = true;
			}

		if (!lettre)
			coups--;
	}

	if (!strcmp(str, word))
		printf("Gagne ! Le mot secret etait bien : %s\n", word);
	else
		printf("Perdu ! malheureusement il ne vous plus de coups\n");

	free (word);
}
