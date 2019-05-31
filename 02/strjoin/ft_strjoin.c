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

char    *ft_strcpy(char *dest, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char	*ft_strcat(char *dest, const char *src)
{
	unsigned char dest_len;
	unsigned char i;

	i = 0;
	while (dest[i])
		i++;
	dest_len = i;
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *ft_s;
    int     len;

    if (*s1 != '\0' && *s2 != '\0')
    {
        len = ft_strlen(s1) + ft_strlen(s2) + 1;
        ft_s = (char *)malloc(sizeof(char) * len);
        ft_strcpy(ft_s, s1, ft_strlen(s1));
        ft_strcat(ft_s, s2);
        return (ft_s);
    }
    return (0);
}

int     main(void)
{
    const char *s1 = "Hello";
    const char *s2 = "World";

    printf("ft_strjoin : %s\n", ft_strjoin(s1, s2));
    return (0);
}
