/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:10:38 by terabu            #+#    #+#             */
/*   Updated: 2022/10/20 12:04:29 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*heap;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (slen == 0 || len == 0 || slen < start)
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	heap = (char *)malloc(sizeof(char) * (len + 1));
	if (heap == NULL)
		return (NULL);
	s += start;
	ft_strlcpy(heap, s, len + 1);
	return (heap);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%s\n",ft_substr("abcde",1,3));
// 	printf("%s\n",ft_substr("abcde",1,0));
// 	printf("%s\n",ft_substr("abcde",100,1));
// 	printf("%s\n",ft_substr("tripouille", 100, 1));
// 	printf("%s\n",ft_substr("tripouille", 0, 42000));

// 	return 0;
// }
