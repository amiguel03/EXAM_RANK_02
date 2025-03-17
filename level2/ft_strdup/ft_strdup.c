#include <stdlib.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

char *ft_strdup(char *src)
{
    int i = 0;
    char *dup;

    dup = (char *)malloc(ft_strlen(src) + 1);
    if (!dup)
        return NULL;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}

/*Resumen de ft_strdup
La función ft_strdup duplica una cadena de caracteres (src) asignando memoria dinámica para la nueva copia.

Funcionamiento:
Calcula la longitud de src usando ft_strlen.
Reserva memoria con malloc, con espacio suficiente para la copia y el \0.
Copia src en la nueva memoria con ft_strcpy.
Retorna el puntero a la nueva cadena duplicada.
Si malloc falla, retorna NULL.*/