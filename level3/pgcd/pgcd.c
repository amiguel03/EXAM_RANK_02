#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{

    if (ac == 3)
    {
        // I won't explain the whole thing
	// but if we take 14 and 77 as input we would
	// have the following (each iteration separated by ;)
	// 14; 14; 14; 14; 14; 14; 7
	// 77; 63; 49; 35; 21; 7;  7
        int number1 = atoi(av[1]);
        int number2 = atoi(av[2]);
        
        if (number1 > 0 && number2 > 0)
        {
            while (number1 != number2)
            {
                if (number1 > number2)
                    number1 = number1 - number2;
                else
                    number2 = number2 - number1;
            }
            printf("%d", number1);
        }
    }
    printf("\n");
}
