/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:19:15 by terabu            #+#    #+#             */
/*   Updated: 2022/10/14 07:12:41 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
		*(p + i++) = c;
	return (s);
}

// #include<stdio.h>
// #include<string.h>
// #include<unistd.h>

// int main(void)
// {
//     char str1[] = "0123456789";
//     char str2[] = "0123456789";
//     unsigned long i = 0;

//     memset(str1+2, 'A', 2);
//     ft_memset(str2+2,'A', 2);

//     while(i < 10)
//     {
//         write(0,&str1[i],1);
//         i++;
//     }

//     i = 0;
//     putchar('\n');
//     while(i < 10)
//     {
//         write(0,&str2[i],1);
//         i++;
//     }
//     putchar('\n');

//     return 0;
// }
