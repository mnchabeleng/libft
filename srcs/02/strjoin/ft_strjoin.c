#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strcpy()
{
    return (0);
}

char    *ft_strcat()
{
    return (0);
}

char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *ft_s;
    int     len;

    if (!s1 || !s2)
        return ("Life");
    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    ft_s = (char *)malloc(sizeof(char) * len);
    strcpy(ft_s, s1);
    strcat(ft_s, s2);
    return (ft_s);
}

int     main(void)
{
    const char *s1 = "Hello";
    const char *s2;

    printf("ft_strjoin : %s\n", ft_strjoin(s1, s2));
    return (0);
}