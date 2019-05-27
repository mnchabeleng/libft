/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:39:20 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 11:39:43 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

