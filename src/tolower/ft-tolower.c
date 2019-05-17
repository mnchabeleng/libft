#include <stdio.h>
#include <ctype.h>

int     ft_tolower(int chr)
{
        if(chr >= 65 && chr <= 90)
                chr = chr + 32;
        return chr;
}

int     main(void)
{
        int n;
        char c;

        n = 100;
        c = 'A';
        printf("tolower : %c\n", tolower(n));
        printf("ft_tolower : %c\n", ft_tolower(n));
        printf("tolower : %c\n", tolower(c));
        printf("ft_tolower : %c\n", ft_tolower(c));
        return (0);
}

