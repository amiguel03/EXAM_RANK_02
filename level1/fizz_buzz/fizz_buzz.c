#include <unistd.h>

ft_write_number(int number)
{
        if (number > 9)
                ft_write_number(number / 10);
        write(1, &"0123456789"[number % 10], 1);
}

int main(void)
{
        int number;
        number = 1;

        while (number <= 100)
        {
                if (number % 3 == 0 && number % 5 == 0)
                        write(1, "fizzbuzz", 8);
                else if (number % 3 == 0)
                        write(1, "fizz", 4);
                else if (number % 5 == 0)
                        write(1, "buzz", 4);
                else
                        ft_write_number(number);
                write(1, "\n", 1);
                number++;
        }

}


/*Resumen detallado
Este programa en C implementa el clásico juego FizzBuzz, imprimiendo números del 1 al 100, con las siguientes reglas:

Si el número es múltiplo de 3 y 5, imprime "fizzbuzz".
Si es múltiplo de 3, imprime "fizz".
Si es múltiplo de 5, imprime "buzz".
Si no es múltiplo de ninguno, imprime el número.
Explicación de ft_write_number(int number)
Esta función imprime un número entero de forma recursiva:

Si el número tiene más de un dígito (number > 9), llama a sí misma con number / 10.
Luego, usa write(1, &"0123456789"[number % 10], 1); para imprimir el último dígito.
Funcionamiento del main
Inicializa number = 1 y usa un while hasta 100.
Aplica las reglas de FizzBuzz y usa ft_write_number() para imprimir los números normales.
Cada salida termina con un \n.*/