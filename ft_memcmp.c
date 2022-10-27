/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:19:20 by terabu            #+#    #+#             */
/*   Updated: 2022/10/15 12:16:29 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*us1 == *us2)
	{
		n--;
		if (n == 0)
			return (0);
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}

// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char str0[] = "AAA";
// 	char str1[] = "AAA";
// 	char str2[] = "AAB";
// 	char str3[] = "AAAA";
// 	char str4[] = "AAAA";
// 	char str5[] = "aaa";
// 	char str6[] = "1";
// 	char str7[] = "";

// 	printf("\n");
// 	printf("Std Lib\n");
// 	printf("---------------\n");
// 	printf("%d\n", memcmp(str0,str1,5));
// 	printf("%d\n", memcmp(str0,str2,5));
// 	printf("%d\n", memcmp(str0,str2,2));
// 	printf("%d\n", memcmp(str0,str3,5));
// 	printf("%d\n", memcmp(str0,str4,2));
// 	printf("%d\n", memcmp(str0,str5,5));
// 	printf("%d\n", memcmp(str0,str6,5));
// 	printf("%d\n", memcmp(str0,str7,5));
// 	printf("%d\n", memcmp(str0,str7,0));

// 	printf("\n");
// 	printf("My func\n");
// 	printf("---------------\n");
// 	printf("%d\n", ft_memcmp(str0,str1,5));
// 	printf("%d\n", ft_memcmp(str0,str2,5));
// 	printf("%d\n", ft_memcmp(str0,str2,2));
// 	printf("%d\n", ft_memcmp(str0,str3,5));
// 	printf("%d\n", ft_memcmp(str0,str4,2));
// 	printf("%d\n", ft_memcmp(str0,str5,5));
// 	printf("%d\n", ft_memcmp(str0,str6,5));
// 	printf("%d\n", ft_memcmp(str0,str7,5));
// 	printf("%d\n", ft_memcmp(str0,str7,0));
// 	printf("\n");
// 	return 0;
// }
