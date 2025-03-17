#include <unistd.h>

int     main (int argc, char **argv)
{
        int i;

        if (argc == 2)
        {
                i = 0;
                while (argv[1][i])
                        i++;
                while (i)
                        write(1, &argv[1][--i], 1);
        }
        write(1, "\n", 1);
        return(0);
}

/*Resumen detallado
Este programa en C imprime la cadena de entrada invertida usando solo write.

Explicación del código
Verifica si hay exactamente un argumento (argc == 2).
Calcula la longitud de la cadena (while (argv[1][i]) i++;).
Imprime los caracteres en orden inverso:
Usa while (i), decrementando i antes de acceder al carácter (--i).
Esto asegura que se empieza desde el último carácter y se retrocede hasta el primero.
Imprime un salto de línea (\n) al final.*/