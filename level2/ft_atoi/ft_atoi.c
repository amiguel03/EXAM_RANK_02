int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    // Ignorar espacios en blanco
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;

    // Manejo de signo
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    
    // Convertir caracteres numéricos en enteros
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return (result * sign);
}

/*Resumen de ft_atoi
La función ft_atoi convierte una cadena de caracteres en un número entero (int).

Ignora espacios en blanco (' ', '\t', '\n', etc.).
Verifica el signo (+ o -) y lo almacena en sign.
Convierte los dígitos en un número entero, sumándolos progresivamente.
Devuelve el número ajustado al signo (result * sign).*/