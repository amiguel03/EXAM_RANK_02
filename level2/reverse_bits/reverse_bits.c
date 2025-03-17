unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i = 8;

    while (i--)
    {
        result = (result << 1) | (octet & 1); // Mueve result a la izquierda y agrega el bit menos significativo de octet
        octet >>= 1; // Desplaza octet a la derecha
    }
    return result;
}

#include <stdio.h>

int main()
{
    unsigned char num = 0b00100110; // 38 en decimal
    unsigned char reversed = reverse_bits(num);

    printf("Original:  %d (binario: 00100110)\n", num);
    printf("Reverso:   %d (binario: 01100100)\n", reversed);

    return 0;
}

/*Resumen de reverse_bits
La función reverse_bits invierte los bits de un unsigned char.

Funcionamiento
Inicializa result en 0.
Itera 8 veces (por cada bit de octet):
Desplaza result a la izquierda.
Extrae el bit menos significativo de octet y lo añade a result.
Desplaza octet a la derecha para procesar el siguiente bit.
Devuelve result, que contiene los bits en orden inverso.*/