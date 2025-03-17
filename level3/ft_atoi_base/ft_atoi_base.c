int ft_atoi_base(const char *str, int str_base);
int isspace(int c);
int isvalid(int c, int baselen);

int ft_atoi_base(const char *str, int str_base)
{
    int res = 0, sign = 1, i = 0;
    // Skip the whitespaces
    while (isspace(str[i])
        i++;
    // Check if the number is negative
    if (str[i] == '+' && str[i + 1] != '-')
        i++;
    // If the number is negative, set the sign to -1 and skip the '-'
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    
    // Loop through the string and convert the numebr to base 10
    while (str[i] && isvalid(str[i], str_base))
    {
        // Multiply the result by the base
        res *= str_base;
        
        // Add the value of the character to the result
        // If the character is a digit, substract the value of '0'
        // from it
        // i.e. '5' - '0' = 5 because the ASCII value of '5' is 53
        // and the ASCII value of '0' is 48
        if (str[i] >= '0' && str[i] <= 9)
            res += str[i] - '0';
        // If the character is a leter, substract the value of 'a' or
        // 'A' from it and add 10
        // i.e. 'f' - 'a' + 10  = 15 because the ASCII value of 'f' is
        // 102 and the ASCII value of 'a' is 97
        else if (str[i] >= 'a' && str[i] <= 'f')
            res += str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            res += str[i] - 'A' + 10;
        i++;
    }
    // Return the result multiplied by the sign
    return (res * sign);
}
// Simple function to check if the character is valid for the base
int isvalid(int ch, int baselen)
{
    // Define the base
    char *lcbase = "0123456789abcdef";
    char *ucbase = "0123456789ABCDEF";
    int i = 0;
    
    // Loop through the base and check if the character is valid
    while (i < baselen)
    {
        // If the character is found in the base, return 1
        if (ch == lcbase[i] || ch == ucbase[i])
            return (1);
        i++;
    }
    return (0);
}

// Simple function to check if the character is a whitespace
int isspace(int c)
{
     if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
         return (1);
     return (0);
}

// Uncomment the main to test the function
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	(void) ac;
// 	(void) av;
// 	if (ac == 3)
// 	{
// 		printf("%d", ft_atoi_base(av[1], ft_atoi_base(av[2], 10)));
// 		return (0);
// 	}
// }
