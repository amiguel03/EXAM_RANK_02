#include <unistd.h>

int main (int ac, char **av)
{
        int i = 0;

        if (ac == 4 && !(av[2][1] && av[3][1]))
        {
                while (av[1][i])
                {
                        if (av[1][i] == av[2][0])
                                av[1][i] =av[3][0];
                        write(1, &av[1][i], 1);
                        i++;
                }
        }
        write(1, "\n", 1);
}

/*Resumen detallado
Este programa en C reemplaza un carácter por otro dentro de una cadena de texto ingresada como argumento.

Explicación del código
Verifica si hay exactamente 3 argumentos adicionales (ac == 4):

av[1]: Cadena original.
av[2]: Carácter a reemplazar (debe ser un solo carácter).
av[3]: Carácter de reemplazo (debe ser un solo carácter).
!(av[2][1] && av[3][1]) verifica que av[2] y av[3] sean de un solo carácter.
Recorre la cadena (av[1]) carácter por carácter (while (av[1][i])).

Si encuentra el carácter en av[2][0], lo reemplaza por av[3][0].

Imprime la cadena modificada.

Si los argumentos no son correctos, solo imprime un salto de línea (\n).*/