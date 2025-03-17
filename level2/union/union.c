#include <unistd.h>

int check(int c, char *str, int index)
{
        int i = 0;

        while(i < index)
        {
                if (str[i] == c)
                        return 0;
                i++;
        }
        return  1;
}

int     main(int argc, char **argv)
{
        int i = 0;
        int j = 0;
        int k = 0;

        if (argc == 3)
        {
                while (argv[1][i])
                        i++;
                while (argv[1][i])
                {
                        argv[1][i] = argv[2][j];
                        i++;
                        j++;
                }
                i--;
                while (k <= i)
                {
                        if(check(argv[1][k], argv[1], k) == 1)
                                write (1, &argv[1][k], 1);
                        k++;
                }

        }
        write(1, "\n", 1);
}

/*Explicación del código
Función check(int c, char *str, int index)

Verifica si el carácter c aparece antes de index en str.
Si c ya apareció, devuelve 0; si es único hasta ese punto, devuelve 1.
Flujo del main:

i cuenta los caracteres de argv[1].
Luego, incorrectamente intenta sobrescribir argv[1] con argv[2], lo cual no es seguro ya que las cadenas de argumentos no son necesariamente modificables.
Intenta imprimir caracteres únicos de la concatenación.*/