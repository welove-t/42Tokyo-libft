/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:19:20 by terabu            #+#    #+#             */
/*   Updated: 2022/10/13 13:02:04 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	cnt;
	size_t	dst_size;
	size_t	src_size;

	if (src == NULL && size == 0)
		return (0);
	src_size = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (src_size);
	dst_size = ft_strlen(dest);
	if (dst_size >= size)
		return (size + src_size);
	cnt = size - dst_size;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && --cnt > 0)
		*dest++ = *src++;
	*dest = '\0';
	return (dst_size + src_size);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char dest[30] = "CCCCC";
// 	char src[10] = "AAAAAAAAA";
// 	printf("%lu:%s\n",ft_strlcat(dest,src,-1),dest);
// }

// int main()
// {
// 	// test1
// 	char dest1[10] = "abcdef";
// 	char src1[6] = "XXXXX";
// 	int size1 = 11;

// 	// test2
// 	char dest2[10] = "abcdef";
// 	char src2[6] = "XXXXX";
// 	int size2 = 10;

// 	// test3
// 	char dest3[10] = "abcdef";
// 	char src3[6] = "XXXXX";
// 	int size3 = 9;

// 	// test4
// 	char dest4[10] = "abcdef";
// 	char src4[6] = "XXXXX";
// 	int size4 = 6;

// 	// test5
// 	char dest5[10] = "abcdef";
// 	char src5[6] = "XXXXX";
// 	int size5 = 5;

// 	// test6
// 	char dest6[10] = "abcdef";
// 	char src6[3] = "XX";
// 	int size6 = 9;

// 	// test7
// 	char dest7[10] = "abcdef";
// 	char src7[2] = "X";
// 	int size7 = 9;

// 	// test8
// 	char dest8[] = "";
// 	char src8[7] = "XXXXXX";
// 	int size8 = 9;

// 	// test9
// 	char dest9[10] = "abcdef";
// 	char src9[] = "";
// 	int size9 = 9;

// 	// test10
// 	char dest10[10] = "abcdef";
// 	char src10[7] = "XXXXXX";
// 	int size10 = 0;

// 	// test11
// 	char dest11[10] = "abcdef";
// 	char src11[] = "";
// 	int size11= 0;

// 	// test12
// 	char dest12[] = "";
// 	char src12[7] = "XXXXXX";
// 	int size12 = 0;

// 	// test13
// 	char dest13[] = "";
// 	char src13[] = "";
// 	int size13 = 9;

// 	// test14
// 	char dest14[] = "";
// 	char src14[] = "";
// 	int size14 = 0;

// // printf("ptn1:  return:%lu dest1:%s\n",strlcat(dest1,src1,size1),dest1);
// printf("ptn2:  return:%lu dest2:%s\n",strlcat(dest2,src2,size2),dest2);
// printf("ptn3:  return:%lu dest3:%s\n",strlcat(dest3,src3,size3),dest3);
// printf("ptn4:  return:%lu dest4:%s\n",strlcat(dest4,src4,size4),dest4);
// printf("ptn5:  return:%lu dest5:%s\n",strlcat(dest5,src5,size5),dest5);
// // printf("ptn6:  return:%lu dest6:%s\n",strlcat(dest6,src6,size6),dest6);
// // printf("ptn7:  return:%lu dest7:%s\n",strlcat(dest7,src7,size7),dest7);
// // printf("ptn6:  return:%lu dest8:%s\n",strlcat(dest8,src8,size8),dest8);
// // printf("ptn7:  return:%lu dest9:%s\n",strlcat(dest9,src9,size9),dest9);
// printf("ptn8:return:%lu dest10:%s\n",strlcat(dest10,src10,size10),dest10);
// printf("ptn9:return:%lu dest11:%s\n",strlcat(dest11,src11,size11),dest11);
// printf("ptn10:return:%lu dest12:%s\n",strlcat(dest12,src12,size12),dest12);
// //printf("ptn11:return:%lu dest13:%s\n",strlcat(dest13,src13,size13),dest13);
// printf("ptn12:return:%lu dest14:%s\n",strlcat(dest14,src14,size14),dest14);

// 	// putchar('\n');
// 	// printf("ptn1:  return:%lu dest1:%s\n",strlcat(dest1,src1,size1),dest1);
// 	printf("ptn2:  return:%lu dest2:%s\n",ft_strlcat(dest2,src2,size2),dest2);
// 	printf("ptn3:  return:%lu dest3:%s\n",ft_strlcat(dest3,src3,size3),dest3);
// 	printf("ptn4:  return:%lu dest4:%s\n",ft_strlcat(dest4,src4,size4),dest4);
// 	printf("ptn5:  return:%lu dest5:%s\n",ft_strlcat(dest5,src5,size5),dest5);
// 	// printf("ptn6:return:%lu dest6:%s\n",ft_strlcat(dest6,src6,size6),dest6);
// 	// printf("ptn7:return:%lu dest7:%s\n",ft_strlcat(dest7,src7,size7),dest7);
// 	// printf("ptn6:return:%lu dest8:%s\n",ft_strlcat(dest8,src8,size8),dest8);
// 	// printf("ptn7:return:%lu dest9:%s\n",ft_strlcat(dest9,src9,size9),dest9);
// printf("ptn8:return:%lu dest10:%s\n",ft_strlcat(dest10,src10,size10),dest10);
// printf("ptn9:return:%lu dest11:%s\n",ft_strlcat(dest11,src11,size11),dest11);
//printf("ptn10:return:%lu dest12:%s\n",ft_strlcat(dest12,src12,size12),dest12);
//printf("ptn11:return:%lu dest13:%s\n",ft_strlcat(dest13,src13,size13),dest13);
//printf("ptn12:return:%lu dest14:%s\n",ft_strlcat(dest14,src14,size14),dest14);
// 	char destn[] = "abcdef";
// 	printf("return:%lu dest14:%s\n",strlcat(destn,"XXXXXX",1),destn);

// 	return 0;
// }
