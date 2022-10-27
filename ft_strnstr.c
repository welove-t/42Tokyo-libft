/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:19:28 by terabu            #+#    #+#             */
/*   Updated: 2022/10/17 12:24:53 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	slen;

	slen = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	if (len > 0)
	{
		while (*haystack != '\0' && slen <= len)
		{
			if (ft_strncmp(haystack, needle, slen) == 0)
				return ((char *)haystack);
			haystack++;
			len--;
		}
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char str[20] = "12a34ab56abc789";
// 	char *p1;
// 	char *q1;

// 	p1 = strnstr(str,"abc",20);
// 	q1 = ft_strnstr(str,"abc",20);
// 	printf("lb:%s\n",p1);
// 	printf("ft:%s\n", q1);
// 	p1 = strnstr(str,"abc",11);
// 	q1 = ft_strnstr(str,"abc",11);
// 	printf("lb:%s\n",p1);
// 	printf("ft:%s\n", q1);

// 	p1 = strnstr(str,"abcd",20);
// 	q1 = ft_strnstr(str,"abcd",20);
// 	printf("lb:%s\n",p1);
// 	printf("ft:%s\n", q1);

// 	p1 = strnstr(str,"12a34",5);
// 	q1 = ft_strnstr(str,"12a34",5);
// 	printf("lb:%s\n",p1);
// 	printf("ft:%s\n", q1);

// 	p1 = strnstr(str,"12a34",4);
// 	q1 = ft_strnstr(str,"12a34",4);
// 	printf("lb:%s\n",p1);
// 	printf("ft:%s\n", q1);

// 	p1 = strnstr(str,"12a34",0);
// 	q1 = ft_strnstr(str,"12a34",0);
// 	printf("lb:%s\n",p1);
// 	printf("ft:%s\n", q1);

// 	p1 = strnstr(str,"12a34",-10);
// 	q1 = ft_strnstr(str,"12a34",-10);
// 	printf("lb:%s\n",p1);
// 	printf("ft:%s\n", q1);

// 	puts("--corner case--");

// 	// p1 = strnstr("aiueo", NULL, 5); // segmentation fault
// 	// q1 = ft_strnstr("aiueo", NULL, 5); // segmentation fault
// 	// printf("lb:%s\n",p1);
// 	// printf("ft:%s\n", q1);
// 	// p1 = strnstr("aiueo", NULL, 0);  // segmentation fault
// 	// q1 = ft_strnstr("aiueo", NULL, 0);   // segmentation fault
// 	// printf("lb:%s\n",p1);
// 	// printf("ft:%s\n", q1);
// 	// p1 = strnstr(NULL, NULL, 5);   // segmentation fault
// 	// q1 = ft_strnstr(NULL, NULL, 5);  // segmentation fault
// 	// printf("lb:%s\n",p1);
// 	// printf("ft:%s\n", q1);
// 	// p1 = strnstr(NULL, NULL, 0);   // segmentation fault
// 	// q1 = ft_strnstr(NULL, NULL, 0);  // segmentation fault
// 	// printf("lb:%s\n",p1);
// 	// printf("ft:%s\n", q1);
// 	p1 = strnstr(NULL, "aiueo", 0); // null
// 	q1 = ft_strnstr(NULL, "aiueo", 0); // null
// 	printf("lb:%s\n",p1);
// 	printf("ft:%s\n", q1);
// 	// p1 = strnstr(NULL, "aiueo", 5);   // segmentation fault
// 	// q1 = ft_strnstr(NULL, "aiueo", 5);   // segmentation fault
// 	// printf("lb:%s\n",p1);
// 	// printf("ft:%s\n", q1);
// 	// p1 = strnstr(NULL, "aiueo", 4); // segmentation fault
// 	q1 = ft_strnstr(NULL, "aiueo", 4); // segmentation fault
// 	// printf("lb:%s\n",p1);
// 	printf("ft:%s\n", q1);
// 	return 0;
// }
