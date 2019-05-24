# Libft.h

#### Re-code a set of the libc functions, as defined in their man. Functions present the same prototype and behaviors as the originals. Function names are prefixed by “ft_”. For instance "strlen" becomes "ft_strlen".

- void	*ft_memset(void *s, int c, int n);
- void	ft_bzero(void *s, int n);
- void	*ft_memcpy(void *dest, const void *src, int n);
- void	*ft_memccpy(void *dest, const void *src, int c, int n);
- void	*ft_memmove(void *dest, const void *src, int n);
- void	*ft_memchr(const void *s, int c, int n);
- int	ft_memcmp(const void *s1, const void *s2, int n);
- int	ft_strlen(const char *s);
- char	*ft_strdup(const char *s);
- char	*ft_strcpy(char *dest, const char *src);
- char	*ft_strncpy(char *dest, const char *src, int n);
- char	*ft_strcat(char *dest, const char *src);
- char	*ft_strncat(char *dest, const char *src, int n);
- ft_strlcat
- char	*ft_strchr(const char *s, int c);
- char	*ft_strrchr(const char *s, int c);
- char	*ft_strstr(const char * haystack, const char needle);
- char	*ft_strnstr(const char *haystack, const char needle, int n);
- int	ft_strcmp(const char *s1, const char *s2);
- int	ft_strncmp(const char *s1, const char *s2, int n);
- int	ft_atoi(const char *nptr);
- int	ft_isalpha(int c);
- int	ft_isdigit(int c);
- int	ft_isalnum(int c);
- int	ft_isascii(int c);
- ft_isprint
- int	ft_toupper(int c);
- int	ft_tolower(int c);
