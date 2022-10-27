/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:19:03 by terabu            #+#    #+#             */
/*   Updated: 2022/10/13 10:36:47 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	unsigned const char	*p_src;

	if (dest == src)
		return (dest);
	p_dest = (unsigned char *)dest;
	p_src = (unsigned const char *)src;
	while (n--)
		*p_dest++ = *p_src++;
	return (dest);
}

// #include<string.h>
// #include<unistd.h>
// #include<stdlib.h>
// #include<stdio.h>

// int main()
// {
// 	char lib_buf[] = "ABCDDEFG";
// 	char lib_buf2[] = "123456789";
// 	char ft_buf[] = "ABCDDEFG";
// 	char ft_buf2[] = "123456789";
// 	int i = 0;

// 	memcpy(lib_buf, lib_buf2,3);
// 	ft_memcpy(ft_buf, ft_buf2,3);

// 	while (i < 8)
// 		write(0, &lib_buf[i++],1);
// 	write(0, "\n",1);
// 	i = 0;
// 	while (i < 8)
// 		write(0, &ft_buf[i++],1);
// 	write(0, "\n",1);

// 	char c[256] = "42tokyo";
// 	printf("lib:%p\n", memcpy(NULL, NULL, 4));
// 	printf("ft:%p\n", ft_memcpy(NULL, NULL, 4));

// 	printf("%p\n", memcpy(c, NULL, 4));  // segmentation fault
// 	printf("%p\n", ft_memcpy(NULL,c, 4));  // segmentation fault
// }
