int is_power_of_2(unsigned int n)
{
        if (n == 0)
                return(0);
        while (n > 1)
        {
                if (n % 2 == 0)
                        n = n / 2;
                else
                        return (0);
        }
        return(1);
}

/*Resumen de la función is_power_of_2
Esta función verifica si un número n es una potencia de 2.

Caso base: Si n es 0, devuelve 0 (falso).
Bucle: Mientras n sea mayor que 1, divide n entre 2 si es par.
Detección de no potencia de 2: Si en algún punto n no es divisible por 2, retorna 0.
Retorno final: Si el bucle termina con n == 1, devuelve 1 (verdadero), indicando que es una potencia de 2.*/
