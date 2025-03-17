#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char underscore = '_';
    char letter;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            letter = argv[1][i];

            if (letter >= 'A' && letter <= 'Z')
            {
                if (i != 0) // Evita agregar '_' si es la primera letra
                    write(1, &underscore, 1);
                letter += 32; // Convierte la letra a minúscula
            }
            write(1, &letter, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

/*Resumen del Código: Conversión de lowerCamelCase a snake_case
Este programa toma un string en lowerCamelCase y lo convierte a snake_case, donde las palabras se separan por guion bajo (_) y las letras mayúsculas se convierten a minúsculas.

Funcionamiento Paso a Paso:
Verifica si hay un argumento válido (argc == 2).
Recorre el string caracter por caracter.
Si el carácter es una mayúscula (A-Z):
Si no es la primera letra, agrega _.
Convierte la mayúscula a minúscula (letter += 32).
Imprime el carácter procesado.
Al finalizar, imprime un salto de línea (\n).*/