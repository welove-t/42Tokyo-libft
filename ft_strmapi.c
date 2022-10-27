/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:20:00 by terabu            #+#    #+#             */
/*   Updated: 2022/10/22 12:56:57 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*heap;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	heap = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (heap == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		heap[i] = f(i, *s);
		i++;
		s++;
	}
	heap[i] = '\0';
	return (heap);
}

// #include <stdio.h>

// char	test_func(unsigned int i, char c)
// {
// 	return (c + i);
// }

// int main()
// {
// 	char (*test)(unsigned int, char);
// 	char p[10] = "aaaaa";

// 	test = test_func;
// 	printf("%s\n",ft_strmapi(p,test));
// 	return 0;
// }
