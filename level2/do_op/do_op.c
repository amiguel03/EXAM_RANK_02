#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_do_op(int a, int b, char c)
{
        if (c == '*')
                return (a * b);
        else if (c == '+')
                return (a + b);
        else if (c == '-')
                return (a - b);
        else if (c == '/')
                return (a / b);
        else if (c == '%')
                return (a % b);
        return (0);
}


int main (int ac, char **av)
{
        if(ac == 4)
        {
                printf("%d\n", ft_do_op(atoi(av[1]), atoi(av[3]), av[2][0]));
        }
        else
                write(1, "\n", 1);
        return (0);
}

/*Resumen del Código: Calculadora Básica
Este programa realiza una operación matemática entre dos números enteros basándose en un operador (+, -, *, /, %).

Funcionamiento Paso a Paso:
Comprueba si hay exactamente 3 argumentos (ac == 4).
Convierte los números de cadena a enteros usando atoi().
Llama a ft_do_op(), que ejecuta la operación dependiendo del operador (+, -, *, /, %).
Imprime el resultado con printf("%d\n", resultado).
Si los argumentos son incorrectos, solo imprime un salto de línea (\n)*/