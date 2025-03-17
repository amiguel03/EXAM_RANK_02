#include <unistd.h>

int has_char(char *str, char c, int index)
{
    int i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;
    int j;

    if (argc == 3)
    {
        while (argv[1][i])
        {
            j = 0;
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j] && !has_char(argv[1], argv[1][i], i))
                {
                    write(1, &argv[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

/*Explicación:
Función has_char: Verifica si un carácter ya apareció en la cadena antes de la posición actual.
Bucle principal: Recorre la primera cadena y busca coincidencias en la segunda.
Evita duplicados: Solo muestra caracteres únicos en el orden de aparición en la primera cadena.
Manejo de argumentos: Si los argumentos no son exactamente dos, solo imprime un salto de línea.*/