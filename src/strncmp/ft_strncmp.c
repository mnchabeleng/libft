#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char *s1;
	char *s2;

	s1 = "Hellooo";
	s2 = "Hello";
	printf("strncmp : %d\n", strncmp(s1, s2, 7));
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, 7));
	return (0);
}
