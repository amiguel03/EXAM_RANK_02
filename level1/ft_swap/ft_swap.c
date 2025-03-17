void ft_swap(int *a, int *b)
{
        int aux;

        aux = *a;
        *a = *b;
        *b = aux;
}

/*Resumen detallado
La función ft_swap intercambia los valores de dos variables enteras utilizando punteros.

Explicación del código
Recibe dos punteros a enteros (int *a, int *b), lo que permite modificar los valores originales.
Guarda el valor de *a en una variable auxiliar aux.
Copia el valor de *b en *a, sobrescribiendo su contenido.
Copia el valor de aux en *b, completando el intercambio*/