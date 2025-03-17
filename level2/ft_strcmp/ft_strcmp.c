#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) != 0)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return(0);
}

/*Resumen de ft_strcmp
La función ft_strcmp compara dos cadenas de caracteres (s1 y s2).

Recorre ambas cadenas mientras al menos una no sea \0.
Si los caracteres son iguales, avanza al siguiente en ambas cadenas.
Si encuentra una diferencia, devuelve la resta de los caracteres (*s1 - *s2).
Si las cadenas son iguales, devuelve 0.*/