#include <stdio.h>
#include <ctype.h>

int     ft_tolower(int c)
{
        if (c >= 65 && c <= 90)
                c = c + 32;
        return (c);
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

