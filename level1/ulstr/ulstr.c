#include <unistd.h>

int main(int argc, char **argv)
{
        int i = 0;

        if (argc == 2)
        {
                while (argv[1][i])
                {
                        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                                argv[1][i] += 32;
                        else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                                argv[1][i] -= 32;
                        i++;
                }
                i = 0;
                while (argv[1][i])
                {
                        write(1, &argv[1][i], 1);
                        i++;
                }
        }
        write(1, "\n", 1);
}

/*Resumen detallado
Este programa en C invierte la capitalización de cada letra en una cadena ingresada como argumento:

Mayúsculas (A-Z) → Minúsculas (a-z)
Minúsculas (a-z) → Mayúsculas (A-Z)
Otros caracteres permanecen iguales
Explicación del código
Verifica si hay exactamente un argumento (argc == 2).
Recorre la cadena (argv[1]) y cambia la capitalización:
Si es mayúscula ('A'-'Z'), la convierte en minúscula (+32).
Si es minúscula ('a'-'z'), la convierte en mayúscula (-32).
Vuelve a recorrer la cadena y la imprime con write.
Imprime un salto de línea (\n) al final.*/