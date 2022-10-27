/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:18:32 by terabu            #+#    #+#             */
/*   Updated: 2022/10/13 10:30:38 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include<stdio.h>
// #include<string.h>
// #include<unistd.h>

// int main(void)
// {
//     char str1[] = "ABCDEFGHIJKL";
//     char str2[] = "ABCDEFGHIJKL";
//     unsigned long i = 0;

//     bzero(str1+2, 2);
//     ft_bzero(str2+2,2);

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
