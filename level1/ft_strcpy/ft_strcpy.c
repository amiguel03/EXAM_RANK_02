#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char	*dest;

	dest = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (dest);
}

/*Resumen detallado
La función ft_strcpy copia el contenido de la cadena s2 en la cadena s1, incluyendo el carácter nulo '\0', y devuelve un puntero a s1.

Explicación del código
Se declara un puntero dest que almacena la dirección original de s1.
Se recorre s2 con un bucle while (*s2), copiando carácter por carácter en s1.
Al finalizar, se añade '\0' al final de s1 para indicar el fin de la cadena.
Se retorna dest, que apunta a la dirección original de s1, permitiendo que la función sea utilizada en asignaciones.*/