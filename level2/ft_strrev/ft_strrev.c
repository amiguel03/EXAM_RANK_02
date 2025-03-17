char    *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char temp;

    while (str[len]) // Calcula la longitud de la cadena
        len++;

    while (i < len / 2) // Intercambia caracteres desde los extremos hacia el centro
    {
        temp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = temp;
        i++;
        len--;
    }

    return (str);
}

/*Resumen de ft_strrev
La función ft_strrev invierte una cadena de caracteres en su lugar y devuelve el mismo puntero.

Calcula la longitud de la cadena.
Intercambia caracteres desde los extremos hacia el centro usando una variable temporal.
Retorna el puntero original con la cadena ya invertida.*/