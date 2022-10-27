/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:19:17 by terabu            #+#    #+#             */
/*   Updated: 2022/10/14 15:54:11 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*us;
	unsigned char	uc;

	us = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*us == uc)
			return (us);
		us++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char s[] = "abcdefg";

// 	printf("lb:%s\n",memchr(s,'c',4));
// 	printf("ft:%s\n",ft_memchr(s,'c',4));
// 	printf("lb:%s\n",memchr(s,'c',3));
// 	printf("ft:%s\n",ft_memchr(s,'c',3));
// 	printf("lb:%s\n",memchr(s,'c',2));
// 	printf("ft:%s\n",ft_memchr(s,'c',2));
// 	printf("lb:%s\n",memchr(s,'c',0));
// 	printf("ft:%s\n",ft_memchr(s,'c',0));
// 	printf("lb:%s\n",memchr(s,'h',0));
// 	printf("ft:%s\n",ft_memchr(s,'h',0));
// 	printf("lb:%s\n",memchr(s,'c'+256,4));
// 	printf("ft:%s\n",ft_memchr(s,'c'+256,4));
// 	return 0;
// }
