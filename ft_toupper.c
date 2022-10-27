/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:19:37 by terabu            #+#    #+#             */
/*   Updated: 2022/10/14 15:54:09 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// #include<stdio.h>
// #include <ctype.h>
// int main()
// {
// 	char s[] = "";
// 	printf("%c\n",toupper(s[0]));
// 	printf("%c\n",ft_toupper(s[0]));
// 	return 0;
// }
