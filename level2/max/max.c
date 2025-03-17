#include <stdio.h>
int max(int *tab, unsigned int len)
{
        while (!tab)
                return(0);
        int cmp = tab[0];
        unsigned int i = 1;
        while (len > i)
        {
                if (tab[i] > cmp)
                {
                        printf("%d\n", tab[i]);
                        cmp = tab[i];
                }
                i++;
        }
        return (cmp);
}

int main()
{
        int asd[] = {5, 6, 7, 8, 9, 10, -1};
        unsigned int length = sizeof(asd) / sizeof(asd[0]); // Calculamos la longitud correcta
        printf("%d\n", max(asd, length));
}


/*Resumen del código
Este programa encuentra el valor máximo dentro de un arreglo de enteros.

Explicación del código
Función max

Si el puntero tab es NULL, retorna 0.
Se inicializa cmp con el primer elemento del arreglo.
Se recorre el arreglo desde la segunda posición (i = 1).
Si se encuentra un número mayor que cmp, se actualiza cmp.
Devuelve el número más grande encontrado.
Función main

Se declara un arreglo asd con valores de prueba.
Se calcula su longitud dividiendo el tamaño total entre el tamaño de un elemento.
Llama a max y muestra el resultado.*/