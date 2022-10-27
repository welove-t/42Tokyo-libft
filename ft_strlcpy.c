/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:19:27 by terabu            #+#    #+#             */
/*   Updated: 2022/10/13 10:41:51 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	while (--size)
	{
		if (*src == '\0')
			break ;
		*dest++ = *src++;
	}
	*dest = '\0';
	return (src_size);
}

// #include<stdio.h>
// #include<string.h>

// int main()
// {

// 	// // test1
// 	// char dest1[7] = "abcdef";
// 	// char src1[4] = "XXX";
// 	// int size1 = 7;

// 	// // test2
// 	// char dest2[7] = "abcdef";
// 	// char src2[4] = "XXX";
// 	// int size2 = 4;

// 	// // test3
// 	// char dest3[7] = "abcdef";
// 	// char src3[4] = "XXX";
// 	// int size3 = 3;

// 	// // test4
// 	// char dest4[7] = "abcdef";
// 	// char src4[4] = "XXX";
// 	// int size4 = 2;

// 	// // test5
// 	// char dest5[7] = "abcdef";
// 	// char src5[4] = "XXX";
// 	// int size5 = 0;

// 	// // test6
// 	// char dest6[4] = "abc";
// 	// char src6[7] = "XXXXXX";
// 	// int size6 = 7;

// 	// // test7
// 	// char dest7[4] = "abc";
// 	// char src7[7] = "XXXXXX";
// 	// int size7 = 4;

// 	// // test8
// 	// char dest8[4] = "abc";
// 	// char src8[7] = "XXXXXX";
// 	// int size8 = 3;

// 	// // test9
// 	// char dest9[4] = "abc";
// 	// char src9[7] = "XXXXXX";
// 	// int size9 = 2;

// 	// // test10
// 	// char dest10[4] = "abc";
// 	// char src10[7] = "XXXXXX";
// 	// int size10 = 0;

// 	// // test11
// 	// char dest11[] = "";
// 	// char src11[4] = "XXX";
// 	// int size11= 2;

// 	// // test12
// 	// char dest12[4] = "abc";
// 	// char src12[] = "";
// 	// int size12 = 2;

// 	// // test13
// 	// char dest13[] = "";
// 	// char src13[] = "";
// 	// int size13 = 2;

// 	// // test14
// 	// char dest14[] = "";
// 	// char src14[4] = "XXX";
// 	// int size14 = 0;

// 	// // test15
// 	// char dest15[4] = "abc";
// 	// char src15[] = "";
// 	// int size15 = 0;

// 	// // test16
// 	// char dest16[] = "";
// 	// char src16[] = "";
// 	// int size16 = 0;

// 	// test1
// 	char dest1[7] = "abcdef";
// 	char src1[4] = "XXX";
// 	int size1 = 8;

// 	// test2
// 	char dest2[7] = "abcdef";
// 	char src2[4] = "XXX";
// 	int size2 = 5;

// 	// test3
// 	char dest3[7] = "abcdef";
// 	char src3[4] = "XXX";
// 	int size3 = 4;

// 	// test4
// 	char dest4[7] = "abcdef";
// 	char src4[4] = "XXX";
// 	int size4 = 3;

// 	// test5
// 	char dest5[7] = "abcdef";
// 	char src5[4] = "XXX";
// 	int size5 = 0;

// 	// test6
// 	char dest6[4] = "abc";
// 	char src6[7] = "XXXXXX";
// 	int size6 = 8;

// 	// test7
// 	char dest7[4] = "abc";
// 	char src7[7] = "XXXXXX";
// 	int size7 = 5;

// 	// test8
// 	char dest8[4] = "abc";
// 	char src8[7] = "XXXXXX";
// 	int size8 = 4;

// 	// test9
// 	char dest9[4] = "abc";
// 	char src9[7] = "XXXXXX";
// 	int size9 = 3;

// 	// test10
// 	char dest10[4] = "abc";
// 	char src10[7] = "XXXXXX";
// 	int size10 = 0;

// 	// test11
// 	char dest11[] = "";
// 	char src11[4] = "XXX";
// 	int size11= 2;

// 	// test12
// 	char dest12[4] = "abc";
// 	char src12[] = "";
// 	int size12 = 2;

// 	// test13
// 	char dest13[] = "";
// 	char src13[] = "";
// 	int size13 = 2;

// 	// test14
// 	char dest14[] = "";
// 	char src14[4] = "XXX";
// 	int size14 = 0;

// 	// test15
// 	char dest15[4] = "abc";
// 	char src15[] = "";
// 	int size15 = 0;

// 	// test16
// 	char dest16[] = "";
// 	char src16[] = "";
// 	int size16 = 0;

// 	// printf("ptn1:  return:%lu dest1:%s\n",strlcpy(dest1,src1,size1),dest1);
// 	// printf("ptn2:  return:%lu dest2:%s\n",strlcpy(dest2,src2,size2),dest2);
// 	// printf("ptn3:  return:%lu dest3:%s\n",strlcpy(dest3,src3,size3),dest3);
// 	// printf("ptn4:  return:%lu dest4:%s\n",strlcpy(dest4,src4,size4),dest4);
// 	// printf("ptn5:  return:%lu dest5:%s\n",strlcpy(dest5,src5,size5),dest5);
// 	// printf("ptn6:  return:%lu dest6:%s\n",strlcpy(dest6,src6,size6),dest6);
// 	// printf("ptn7:  return:%lu dest7:%s\n",strlcpy(dest7,src7,size7),dest7);
// 	// printf("ptn8:  return:%lu dest8:%s\n",strlcpy(dest8,src8,size8),dest8);
// 	// printf("ptn9:  return:%lu dest9:%s\n",strlcpy(dest9,src9,size9),dest9);
// //printf("ptn10:return:%lu dest10:%s\n",strlcpy(dest10,src10,size10),dest10);
// //printf("ptn11:return:%lu dest11:%s\n",strlcpy(dest11,src11,size11),dest11);
// //printf("ptn12:return:%lu dest12:%s\n",strlcpy(dest12,src12,size12),dest12);
// //printf("ptn13:return:%lu dest13:%s\n",strlcpy(dest13,src13,size13),dest13);
// //printf("ptn14:return:%lu dest14:%s\n",strlcpy(dest14,src14,size14),dest14);
// //printf("ptn15:return:%lu dest15:%s\n",strlcpy(dest15,src15,size15),dest15);
// //printf("ptn16:return:%lu dest16:%s\n",strlcpy(dest16,src16,size16),dest16);

// 	putchar('\n');
// 	printf("ptn1:  return:%lu dest1:%s\n",ft_strlcpy(dest1,src1,size1),dest1);
// 	printf("ptn2:  return:%lu dest2:%s\n",ft_strlcpy(dest2,src2,size2),dest2);
// 	printf("ptn3:  return:%lu dest3:%s\n",ft_strlcpy(dest3,src3,size3),dest3);
// 	printf("ptn4:  return:%lu dest4:%s\n",ft_strlcpy(dest4,src4,size4),dest4);
// 	printf("ptn5:  return:%lu dest5:%s\n",ft_strlcpy(dest5,src5,size5),dest5);
// 	printf("ptn6:  return:%lu dest6:%s\n",ft_strlcpy(dest6,src6,size6),dest6);
// 	printf("ptn7:  return:%lu dest7:%s\n",ft_strlcpy(dest7,src7,size7),dest7);
// 	printf("ptn8:  return:%lu dest8:%s\n",ft_strlcpy(dest8,src8,size8),dest8);
// 	printf("ptn9:  return:%lu dest9:%s\n",ft_strlcpy(dest9,src9,size9),dest9);
//printf("ptn10:return:%lu dest10:%s\n",ft_strlcpy(dest10,src10,size10),dest10);
//printf("ptn11:return:%lu dest11:%s\n",ft_strlcpy(dest11,src11,size11),dest11);
//printf("ptn12:return:%lu dest12:%s\n",ft_strlcpy(dest12,src12,size12),dest12);
//printf("ptn13:return:%lu dest13:%s\n",ft_strlcpy(dest13,src13,size13),dest13);
//printf("ptn14:return:%lu dest14:%s\n",ft_strlcpy(dest14,src14,size14),dest14);
//printf("ptn15:return:%lu dest15:%s\n",ft_strlcpy(dest15,src15,size15),dest15);
//printf("ptn16:return:%lu dest16:%s\n",ft_strlcpy(dest16,src16,size16),dest16);

// 	return 0;
// }
