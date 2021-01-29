#include "tableaux.h"

int		sommeTableau(int* tableau)
{
	int	somme;
	int	i;

	somme = 0;
	i = -1;
	while (++i < sizeof(*tableau))
		somme = somme + *(tableau + i);
	return (somme);
}

double	moyenneTableau(int* tableau)
{
	double	moyenne;
	int	i;

	moyenne = 0;
	i = -1;
	while (++i < sizeof(*tableau))
		moyenne = (double)sommeTableau(tableau) / (double)sizeof(*tableau);
	return (moyenne);
}

void	copieTableau(int* tableauOriginal, int* tableauCopie)
{
	int	i;

	i = -1;
	while (++i < sizeof(*tableauOriginal))
		*(tableauCopie + i) = *(tableauOriginal + i);
}

void	maximumTableau(int* tableau, int valeurMax)
{
	int	i;

	i = -1;
	while (++i < sizeof(*tableau))
		if (*(tableau + i) > valeurMax)
			*(tableau + i) = 0;
}

void	ordonnerTableau(int* tableau)
{
	int	i;
	int	j;
	int	temp;

	i = -1;
	while (++i < sizeof(*tableau))
	{
		j = i;
		while (++j < sizeof(*tableau))
			if (*(tableau + i) > *(tableau + j))
			{
				temp = *(tableau + i);
				*(tableau + i) = *(tableau + j);
				*(tableau + j) = temp;
				j = i;
			}
	}
}
