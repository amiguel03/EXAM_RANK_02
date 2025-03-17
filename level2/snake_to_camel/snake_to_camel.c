#include <unistd.h>

int main (int argc, char **argv)
{
        int i = 0;

        if (argc == 2)
        {
                while(argv[1][i])
                {
                        if(argv[1][i] == '_')
                        {
                                i++;
                                argv[1][i] -=  32;
                        }
                        write(1, &argv[1][i], 1);
                        i++;
                }
        }
        write (1, "\n", 1);
}


/*Este código convierte una cadena en snake_case a camelCase.

Funcionamiento
Recorre la cadena de argv[1].
Si encuentra un _, lo omite y convierte la siguiente letra en mayúscula (- 32).
Escribe la letra en la salida estándar (write).
Imprime un salto de línea al final.*/