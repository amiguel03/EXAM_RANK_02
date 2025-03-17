#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'y')
                av[1][i] += 1;
            else if(av[1][i] >= 'A' && av[1][i] <= 'Y')
                av[1][i] += 1;
            else if(av[1][i] == 'Z' || av[1][i] == 'z')
                av[1][i] -=25;
            write (1, &av[1][i++], 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}

/*Resumen detallado
Este programa realiza un cifrado César con un desplazamiento de +1, es decir, cada letra se reemplaza por la siguiente en el alfabeto.

'a' → 'b', 'b' → 'c', ..., 'y' → 'z'
'A' → 'B', 'B' → 'C', ..., 'Y' → 'Z'
Las letras 'Z' y 'z' regresan a 'A' y 'a' respectivamente.
Los caracteres que no sean letras quedan sin cambios.
Explicación del código
Verifica si hay exactamente un argumento (ac == 2).
Recorre la cadena carácter por carácter (while (av[1][i])).
Aplica la transformación:
Si el carácter está entre 'a' - 'y' o 'A' - 'Y', lo desplaza una posición adelante (+1).
Si el carácter es 'Z' o 'z', lo reinicia a 'A' o 'a' (-25).
Otros caracteres se imprimen sin cambios.
Imprime el carácter modificado con write.
Al final, imprime un salto de línea (\n).*/