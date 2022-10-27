/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:19:26 by terabu            #+#    #+#             */
/*   Updated: 2022/10/17 12:32:48 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && n--)
	{
		if (*s1 == '\0' || *s2 == '\0' || n == 0)
			return (0);
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// #include<limits.h>

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
// 	printf("%d\n", strncmp(str0,str1,5));
// 	printf("%d\n", strncmp(str0,str2,5));
// 	printf("%d\n", strncmp(str0,str2,2));
// 	printf("%d\n", strncmp(str0,str3,5));
// 	printf("%d\n", strncmp(str0,str4,2));
// 	printf("%d\n", strncmp(str0,str5,5));
// 	printf("%d\n", strncmp(str0,str6,5));
// 	printf("%d\n", strncmp(str0,str7,5));
// 	printf("%d\n", strncmp(str0,str7,0));

// 	printf("\n");
// 	printf("My func\n");
// 	printf("---------------\n");
// 	printf("%d\n", ft_strncmp(str0,str1,5));
// 	printf("%d\n", ft_strncmp(str0,str2,5));
// 	printf("%d\n", ft_strncmp(str0,str2,2));
// 	printf("%d\n", ft_strncmp(str0,str3,5));
// 	printf("%d\n", ft_strncmp(str0,str4,2));
// 	printf("%d\n", ft_strncmp(str0,str5,5));
// 	printf("%d\n", ft_strncmp(str0,str6,5));
// 	printf("%d\n", ft_strncmp(str0,str7,5));
// 	printf("%d\n", ft_strncmp(str0,str7,0));
// 	printf("\n");

// 	char *str = "libft-test-tokyo";
// 	char *cmp2 = calloc(10, 1);
// 	strlcpy(cmp2, "libft", 10);
// 	int	len = strlen(str);
// 	cmp2[5] = CHAR_MIN;
// 	cmp2[5] = -1;
// 	printf("lb:%d\n", strncmp(str, cmp2, len));
// 	printf("ft:%d\n", ft_strncmp(str, cmp2, len));
// 	printf("lb:%d\n", strncmp(cmp2, str, len));
// 	printf("ft:%d\n", ft_strncmp(cmp2, str, len));
// 	cmp2[5] = -42;
// 	printf("lb:%d\n", strncmp(str, cmp2, len));
// 	printf("ft:%d\n", ft_strncmp(str, cmp2, len));
// 	printf("lb:%d\n", strncmp(cmp2, str, len));
// 	printf("ft:%d\n", ft_strncmp(cmp2, str, len));
// 	char *cmp3 = calloc(10, 1);
// 	strlcpy(cmp3, "libft", 10);
// 	cmp3[5] = CHAR_MIN;
// 	printf("lb:%d\n", strncmp(cmp2, cmp3, len));
// 	printf("ft:%d\n", ft_strncmp(cmp2, cmp3, len));

// 	return 0;
// }
