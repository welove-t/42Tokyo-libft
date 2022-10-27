/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:19:34 by terabu            #+#    #+#             */
/*   Updated: 2022/10/14 15:54:11 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// #include<stdio.h>
// #include <ctype.h>
// int main()
// {
// 	char s[] = "HOGE";
// 	printf("%c\n",tolower(s[0]));
// 	printf("%c\n",ft_tolower(s[0]));
// 	return 0;
// }
