#include <string.h>
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] && s2[i] && s1[i] == s2[i])
			i++;
		return (s1[i] - s2[i]);
	}
	return (-1);
}

int	main(void)
{
	char *s1;
	char *s2;

	s1 = "Read Dead Redemption";
	s2 = "Redemption";
	printf("strcmp : %d\n", strcmp(s1, s2));
	printf("ft_strcmp : %d\n", ft_strcmp(s1, s2));
	return (0);
}
