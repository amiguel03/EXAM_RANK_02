#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
    int i = 0, j = 0;
    
    while (s1[i] && s2[j])
    {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    if (!s1[i]) // Si hemos recorrido toda s1, significa que se encontró en s2
    {
        i = 0;
        while (s1[i])
            write(1, &s1[i++], 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        wdmatch(argv[1], argv[2]);
    write(1, "\n", 1);
    return 0;
}


/*Explicación:
La función wdmatch recorre s1 y s2 al mismo tiempo.
Si encuentra un carácter de s1 en s2, avanza en s1.
Si al final hemos recorrido toda s1, significa que s1 está contenida en s2 en orden.
Si s1 se encontró en s2, se imprime s1.
La función main maneja los argumentos y llama a wdmatch si se reciben exactamente 2 cadenas.*/