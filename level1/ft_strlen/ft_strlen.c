int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

/*Resumen detallado
La función ft_strlen calcula y devuelve la longitud de una cadena (número de caracteres antes del carácter nulo '\0').

Explicación del código
Declara un entero len = 0 para contar los caracteres.
Usa un bucle while (str[len]) que avanza mientras no se llegue al '\0'.
En cada iteración, incrementa len hasta alcanzar el final de la cadena.
Retorna len, que representa la cantidad de caracteres en la cadena.*/