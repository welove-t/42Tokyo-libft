/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:19:31 by terabu            #+#    #+#             */
/*   Updated: 2022/10/17 12:40:58 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	char	*return_p;

	cc = (char)c;
	return_p = NULL;
	while (*s != '\0')
	{
		if (*s == cc)
			return_p = (char *)s;
		s++;
	}
	if (cc == 0)
		return ((char *)s);
	if (return_p != NULL)
		return (return_p);
	else
		return (NULL);
}

// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char s[] = "abcdeabfg";
// 	printf("lb:%s\n",strrchr(s,'b'));
// 	printf("ft:%s\n",ft_strrchr(s,'b'));
// 	printf("lb:%s\n",strrchr(s,'h'));
// 	printf("ft:%s\n",ft_strrchr(s,'h'));
// 	printf("lb:%s\n",strrchr(s,0));
// 	printf("ft:%s\n",ft_strrchr(s,0));
// 	printf("lb:%s\n",strrchr(s,'a' + 256));
// 	printf("ft:%s\n",ft_strrchr(s,'a' + 256));
// 	printf("lb:%s\n",strrchr(s,'a' + 512));
// 	printf("ft:%s\n",ft_strrchr(s,'a' + 512));
// 	return 0;
// }
