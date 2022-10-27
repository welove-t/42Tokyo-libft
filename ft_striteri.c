/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:19:54 by terabu            #+#    #+#             */
/*   Updated: 2022/10/21 15:53:38 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (*s)
		f(i++, s++);
}

// #include <stdio.h>

// void test_func(unsigned int i, char *s)
// {
// 	printf("i:%u s:%s\n", i, s);
// }

// int main()
// {
// 	void (*test)(unsigned int, char *);
// 	char p[10] = "abcde";

// 	test = test_func;
// 	ft_striteri(p,test);
// 	return 0;
// }
