/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:19:23 by terabu            #+#    #+#             */
/*   Updated: 2022/10/17 12:40:09 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char)c;
	while (*s != cc && *s != '\0')
		s++;
	if (*s == cc)
		return ((char *)s);
	else
		return (NULL);
}

// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char s[] = "abcdefg";
// 	printf("lb:%s\n",strchr(s,'c'));
// 	printf("ft:%s\n",ft_strchr(s,'c'));
// 	printf("lb:%s\n",strchr(s,'h'));
// 	printf("ft:%s\n",ft_strchr(s,'h'));
// 	printf("lb:%s\n",strchr(s,0));
// 	printf("ft:%s\n",ft_strchr(s,0));
// 	printf("lb:%s\n",strchr(s,'a' + 256));
// 	printf("ft:%s\n",ft_strchr(s,'a' + 256));
// 	printf("lb:%s\n",strchr(s,'a' + 512));
// 	printf("ft:%s\n",ft_strchr(s,'a' + 512));
// 	printf("lb:%s\n",strchr(s,'a' - 256));
// 	printf("ft:%s\n",ft_strchr(s,'a' - 256));
// 	printf("lb:%s\n",strchr(s,'a' - 255));
// 	printf("ft:%s\n",ft_strchr(s,'a' - 255));
// 	char *t = "libft-test-tokyo";
// 	printf("lb:%s\n",strchr(t,'l' - 256));
// 	printf("ft:%s\n",ft_strchr(t,'l' - 256));
// 	return 0;
// }
