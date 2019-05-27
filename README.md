# Libft.h

#### Re-code a set of the libc functions, as defined in their man. Functions present the same prototype and behaviors as the originals. Function names are prefixed by “ft_”. For instance "strlen" becomes "ft_strlen".

### Part 1 - Libc functions ~ 28 functions

- void		*ft_memset(void *s, int c, size_t n);
- void		ft_bzero(void *s, size_t n);
- void		*ft_memcpy(void *dest, const void *src, size_t n);
- void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
- void		*ft_memmove(void *dest, const void *src, size_t n);
- void		*ft_memchr(const void *s, int c, size_t n);
- int		ft_memcmp(const void *s1, const void *s2, size_t n);
- size_t	ft_strlen(const char *s);
- char		*ft_strdup(const char *s);
- char		*ft_strcpy(char *dest, const char *src);
- char		*ft_strncpy(char *dest, const char *src, size_t n);
- char		*ft_strcat(char *dest, const char *src);
- char		*ft_strncat(char *dest, const char *src, size_t n);
- size_t	ft_strlcat(char *dest, char *src, size_t n);
- char		*ft_strchr(const char *s, int c);
- char		*ft_strrchr(const char *s, int c);
- char		*ft_strstr(const char *haystack, const char needle);
- char		*ft_strnstr(const char *haystack, const char needle, size_t n);
- int		ft_strcmp(const char *s1, const char *s2);
- int		ft_strncmp(const char *s1, const char *s2, size_t n);
- int		ft_atoi(const char *nptr);
- int		ft_isalpha(int c);
- int		ft_isdigit(int c);
- int		ft_isalnum(int c);
- int		ft_isascii(int c);
- int		ft_isprint(int c);
- int		ft_toupper(int c);
- int		ft_tolower(int c);

### Part 2 - Additional functions ~ 24 functions

- ft_memalloc
- ft_memdel
- ft_strnew
- ft_strdel
- ft_strclr
- ft_striter
- ft_striteri
- ft_strmap
- ft_strmapi
- ft_strequ
- ft_strnequ
- ft_strsub
- ft_strjoin
- ft_strtrim
- ft_strsplit
- ft_itoa
- ft_putchar
- ft_putstr
- ft_putendl
- ft_putnbr
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd
