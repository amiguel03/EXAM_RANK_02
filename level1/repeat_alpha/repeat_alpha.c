#include <unistd.h>

int     main(int argc, char **argv)
{
        int i = 0;
        int letter;

        if (argc == 2)
        {
                while (argv[1][i])
                {
                        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                        {
                                letter = argv[1][i] - 'A' + 1; // Número de repeticiones basado en posición
                                while (letter--)
                                        write(1, &argv[1][i], 1);
                        }
                        else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                        {
                                letter = argv[1][i] - 'a' + 1; // Número de repeticiones basado en posición
                                while (letter--)
                                        write(1, &argv[1][i], 1);
                        }
                        else
                                write(1, &argv[1][i], 1);
                        i++;
                }
        }
        write(1, "\n", 1);
        return (0);
}

/*Resumen detallado
Este programa en C imprime una cadena pasada como argumento, repitiendo cada letra según su posición en el alfabeto.

'A' → 1 vez, 'B' → 2 veces, ..., 'Z' → 26 veces.
'a' → 1 vez, 'b' → 2 veces, ..., 'z' → 26 veces.
Otros caracteres se imprimen sin cambios.

Explicación del código
Verifica si hay exactamente un argumento (argc == 2).
Recorre la cadena caracter por caracter (while (argv[1][i])).
Si el carácter es una letra mayúscula ('A' - 'Z'), calcula su posición en el alfabeto y la imprime tantas veces como indique su posición.
Si el carácter es una letra minúscula ('a' - 'z'), hace lo mismo que con las mayúsculas.
Si el carácter no es una letra, lo imprime sin modificaciones.
Al final, imprime un salto de línea (\n).*/