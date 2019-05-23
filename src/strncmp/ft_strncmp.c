#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	if (s1 && s2)
	{
		while (--n && *s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (-1);
}

int	main(void)
{
	char *s1;
	char *s2;

	s1 = "Red Dead Redemption";
	s2 = "RediD";
	printf("strncmp : %d\n", strncmp(s1, s2, 7));
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, 7));
	return (0);
}
