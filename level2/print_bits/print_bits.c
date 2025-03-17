#include <unistd.h>

void    print_bits(unsigned char octet)
{
        int                             i = 8;
        unsigned char   bit;

        while (i--)
        {
                bit = ((octet >> i) & 1) + '0';
                write(1, &bit, 1);
        }
}

/*Resumen del código
El programa define la función print_bits que imprime en pantalla la representación binaria de un número de 8 bits (unsigned char).

Explicación del código
Desplazamiento y enmascarado de bits
Se inicializa i en 8 (porque un unsigned char tiene 8 bits).
Se usa un bucle while (i--) para recorrer los bits desde el más significativo (MSB) hasta el menos significativo (LSB).
octet >> i desplaza el bit en la posición i hacia la derecha.
& 1 extrae solo el bit menos significativo de ese resultado.
Se convierte en carácter ('0' o '1') sumando '0'.
Se usa write(1, &bit, 1); para imprimir el bit.*/