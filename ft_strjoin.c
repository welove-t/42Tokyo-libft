/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:11:08 by terabu            #+#    #+#             */
/*   Updated: 2022/10/21 16:44:08 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*heap;
	size_t	len_s1;
	size_t	len_s2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s2 == NULL || *s2 == '\0')
		return (ft_strdup(s1));
	if (s1 == NULL || *s1 == '\0')
		return (ft_strdup(s2));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	heap = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (heap == NULL)
		return (NULL);
	heap[0] = '\0';
	ft_strlcat(heap, s1, len_s1 + 1);
	ft_strlcat(heap, s2, len_s1 + len_s2 + 1);
	return (heap);
}

// #include<stdio.h>
// #include<unistd.h>
// int main()
// {
// 	char *str = "";
// 	str = ft_strjoin("abc", "42");
// 	printf("%s\n",str);

// 	char	*s1 = "where is my ";
// 	char	*s2 = "malloc ???";
// 	printf("%s\n",ft_strjoin(s1, s2));
// 	// int i = 0;
// 	// while (i < 5)
// 	// {
// 	// 	write(1, &str[i], 1);
// 	// 	i++;
// 	// }
// 	return 0;
// }
