#include <unistd.h>

int main (int argc, char **argv)
{
        int     i;

        if (argc == 2)
        {
                i = 0;
                while (argv[1][i])
                        i++;
                i--;
                while (argv[1][i] <= 32) //retrocede para quitar espacios
                        i--;
                while (argv[1][i] > 32) //retrocede hasta el inicio de la ultima palabra
                        i--;
                i++;
                while (argv[1][i] > 32) //Pinta la ultima palabra
                        write(1, &argv[1][i++], 1);
        }
        write (1, "\n", 1);
        return (0);
}

/*Resumen del programa
Este programa toma una cadena como argumento y muestra la última palabra en ella.

Explicación del código
Verifica que haya un argumento (argc == 2)

Si no hay un argumento válido, solo imprime un salto de línea.
Calcula la longitud de la cadena

Usa un while para recorrer la cadena y encontrar su fin (\0).
Luego, retrocede una posición (i--) para evitar el \0.
Retrocede eliminando espacios al final

Si la cadena tiene espacios al final, los ignora.
Retrocede hasta el inicio de la última palabra

Encuentra el primer espacio antes de la última palabra.
Imprime la última palabra

Escribe los caracteres hasta encontrar un espacio.*/