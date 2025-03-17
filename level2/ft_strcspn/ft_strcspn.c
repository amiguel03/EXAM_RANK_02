#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j;

    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j]) // Si encuentra un carácter prohibido
                return i;
            j++;
        }
        i++;
    }
    return i; // Si no encuentra ningún carácter de reject
}


/*Resumen de ft_strcspn
La función ft_strcspn calcula la longitud del segmento inicial de s que no contiene caracteres de reject.

Funcionamiento:
Recorre s carácter por carácter.
Compara cada carácter de s con los de reject.
Si encuentra un carácter de reject, retorna la posición actual.
Si s no contiene caracteres de reject, retorna su longitud.*/