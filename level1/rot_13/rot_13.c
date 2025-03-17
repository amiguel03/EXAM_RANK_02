int     main(int argc, char **argv)
{
        int     i = 0;

        if (argc == 2)
        {
                while (argv[1][i])
                {
                        if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
                                argv[1][i] += 13;
                        else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z') || (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
                                argv[1][i] -= 13;
                        write(1, &argv[1][i], 1);
                        i++;
                }
        }
        write(1, "\n", 1);
        return (0);
}

/*Resumen detallado
Este programa implementa el cifrado ROT13, un método de cifrado simple que desplaza cada letra 13 posiciones en el alfabeto.

Explicación del código
Verifica que hay exactamente un argumento (argc == 2).
Recorre la cadena carácter por carácter (while (argv[1][i])).
Aplica la transformación ROT13:
Si el carácter está entre 'a' - 'm' o 'A' - 'M', se le suman 13 posiciones.
Si el carácter está entre 'n' - 'z' o 'N' - 'Z', se le restan 13 posiciones.
Los caracteres que no sean letras quedan sin cambios.
Imprime el carácter modificado con write(1, &argv[1][i], 1);.
Al final, imprime un salto de línea (\n).*/