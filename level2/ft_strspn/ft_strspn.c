#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    int found;
    
    while (s[i])
    {
        found = 0;
        for (size_t j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
            break;
        i++;
    }
    return i;
}

/*La función ft_strspn calcula la longitud del segmento inicial de s que solo contiene caracteres presentes en accept.

Cómo funciona:
Recorre s desde el inicio.
Para cada carácter de s, verifica si está en accept.
Si el carácter está en accept, continúa contando.
Si encuentra un carácter que no está en accept, se detiene y devuelve la cantidad de caracteres válidos.*/
