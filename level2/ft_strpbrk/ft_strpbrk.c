char *ft_strpbrk(const char *s1, const char *s2)
{
    int i;

    while (*s1)
    {
        i = 0;
        while (s2[i])
        {
            if (*s1 == s2[i])
                return (char *)s1;
            i++;
        }
        s1++;
    }
    return NULL;
}

/*Resumen de ft_strpbrk
Esta función busca el primer carácter en s1 que coincida con cualquier carácter de s2 y devuelve un puntero a esa posición.

Recorre s1 carácter por carácter.
Por cada carácter en s1, busca en s2 si hay una coincidencia.
Si encuentra una coincidencia, devuelve un puntero a ese carácter en s1.
Si no encuentra coincidencias, devuelve NULL.*/