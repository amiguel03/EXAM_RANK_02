#include <unistd.h>

void ft_putstr(char *str)
{
        int i = 0;

        while (str[i])
        {
                write (1, &str[i], 1);
                i++;
        }
}

/*Resumen detallado
La función ft_putstr imprime una cadena de caracteres en la salida estándar (stdout) sin usar printf.

Explicación del código
Recibe un puntero a una cadena (char *str) como argumento.
Inicializa un índice i = 0 para recorrer la cadena.
Usa un bucle while para recorrer la cadena hasta el carácter nulo '\0', que indica el final de la cadena.
En cada iteración, imprime un carácter con write(1, &str[i], 1);.
Incrementa i para pasar al siguiente carácter.*/
