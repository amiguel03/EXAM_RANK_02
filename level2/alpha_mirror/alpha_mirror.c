#include <unistd.h>

int     main (int argc, char **argv)
{
        int i = 0;

        if (argc == 2)
        {
                while(argv[1][i])
                {
                        if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                        {
                                argv[1][i] = 90 - argv[1][i] + 65;
                        }
                        else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                        {
                                argv[1][i] = 122 - argv[1][i] + 97;
                        }
                        write(1, &argv[1][i], 1);
                        i++;
                }
        }
        write(1, "\n", 1);
}

/*Resumen detallado
Este programa en C invierte el alfabeto de cada letra en una cadena ingresada como argumento.

A se convierte en Z, B en Y, C en X, etc.
a se convierte en z, b en y, c en x, etc.
Los caracteres no alfabéticos permanecen iguales.
Explicación del código
Verifica que haya exactamente un argumento (argc == 2).
Recorre la cadena (argv[1]) y transforma cada letra:
Mayúsculas (A-Z):
argv[1][i] = 90 - argv[1][i] + 65;
90 es el ASCII de Z, 65 es el de A.
argv[1][i] se convierte en su reflejo en el alfabeto.
Minúsculas (a-z):
argv[1][i] = 122 - argv[1][i] + 97;
122 es el ASCII de z, 97 es el de a.
argv[1][i] se convierte en su reflejo en el alfabeto.
Imprime cada carácter modificado usando write.
Imprime un salto de línea (\n) al final.*/