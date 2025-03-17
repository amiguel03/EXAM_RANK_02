#include <unistd.h>

int main(int argc, char **argv)
{
        int i = 0;

        if (argc == 2)
        {
                while (argv[1][i] == 32 || argv[1][i] == 9)
                        i++;
                while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
                {
                        write(1, &argv[1][i], 1);
                        i++;
                }
        }
        write(1, "\n", 1);

}


/*Este programa en C imprime la primera palabra de una cadena pasada como argumento.
Verifica si hay exactamente un argumento (argc == 2).
Ignora espacios y tabuladores al inicio (while (argv[1][i] == 32 || argv[1][i] == 9) i++;).
Imprime la primera palabra, es decir, los caracteres hasta encontrar un espacio o tabulador.
Finaliza con un salto de línea (write(1, "\n", 1);).
Si no hay un argumento o hay más de uno, solo imprime una nueva línea.*/