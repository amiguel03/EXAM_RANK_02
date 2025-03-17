unsigned char swap_bits(unsigned char octet)
{
        return ((octet >> 4) | (octet << 4));
}

/*Explicación del código swap_bits
La función swap_bits intercambia los 4 bits más significativos (high nibble) con los 4 bits menos significativos (low nibble) de un unsigned char (1 byte = 8 bits).

Desglose de la operación:
c
Copiar
Editar
return ((octet >> 4) | (octet << 4));
(octet >> 4):

Desplaza los 4 bits más significativos hacia la derecha, moviéndolos a la posición de los 4 bits menos significativos.
(octet << 4):

Desplaza los 4 bits menos significativos hacia la izquierda, llevándolos a la posición de los 4 bits más significativos.
| (operador OR bit a bit):

Fusiona los dos resultados para intercambiar los nibbles.*/