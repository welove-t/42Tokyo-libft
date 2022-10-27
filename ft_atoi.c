/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:19:03 by terabu            #+#    #+#             */
/*   Updated: 2022/10/15 15:50:41 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setnum(char *s, int i)
{
	long	n;
	long	od;
	int		om;

	n = 0;
	while ('0' <= *s && *s <= '9')
	{
		n = (n * 10 + (*s++ - '0') * i);
		if (i < 0)
		{
			od = LONG_MIN / 10;
			om = (int)(LONG_MIN % 10 * -1);
			if ((n < od && *s != '\0') || (n == od && ((int)(*s - '0')) > om))
				return ((int)LONG_MIN);
		}
		else
		{
			od = LONG_MAX / 10;
			om = (int)(LONG_MAX % 10);
			if ((n > od && *s != '\0') || (n == od && ((int)(*s - '0')) > om))
				return ((int)LONG_MAX);
		}
	}
	return ((int)(n));
}

int	ft_atoi(const char *nptr)
{
	char		*str;
	int			sign;

	str = (char *)nptr;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	return (setnum(str, sign));
}

// #include<stdlib.h>
// #include<stdio.h>
// int main()
// {
// 	char str1[] = " +1234ab567";// 1234
// 	char str2[] = "   1234ab567";// 1234
// 	char str3[] = "   -12345"; // -12345
// 	char str4[] = "   -2147483647a123";// -2147483647
// 	char str5[] = "   -2147483648";// -2147483648
// 	char str6[] = "   -+2147483648";// 0
// 	char str7[] = "   +-2147483648";// 0
// 	char str8[] = "   21474836489";// 9
// 	char str9[] = "   -21474836489";// -9
// 	char str10[] = "   +0ab123";// 0

// 	printf("li:%d\n",atoi(str1));
// 	printf("ft:%d\n",ft_atoi(str1));
// 	printf("li:%d\n",atoi(str2));
// 	printf("ft:%d\n",ft_atoi(str2));
// 	printf("li:%d\n",atoi(str3));
// 	printf("ft:%d\n",ft_atoi(str3));
// 	printf("li:%d\n",atoi(str4));
// 	printf("ft:%d\n",ft_atoi(str4));
// 	printf("li:%d\n",atoi(str5));
// 	printf("ft:%d\n",ft_atoi(str5));
// 	printf("li:%d\n",atoi(str6));
// 	printf("ft:%d\n",ft_atoi(str6));
// 	printf("li:%d\n",atoi(str7));
// 	printf("ft:%d\n",ft_atoi(str7));
// 	printf("li:%d\n",atoi(str8));
// 	printf("ft:%d\n",ft_atoi(str8));
// 	printf("li:%d\n",atoi(str9));
// 	printf("ft:%d\n",ft_atoi(str9));
// 	printf("li:%d\n",atoi(str10));
// 	printf("ft:%d\n",ft_atoi(str10));
// 	puts("--long-case--");
// 	printf("li:%d\n",atoi("9223372036854775807"));
// 	printf("ft:%d\n",ft_atoi("9223372036854775807"));
// 	printf("li:%d\n",atoi("9223372036854775808"));
// 	printf("ft:%d\n",ft_atoi("9223372036854775808"));
// 	printf("li:%d\n",atoi("-9223372036854775808"));
// 	printf("ft:%d\n",ft_atoi("-9223372036854775808"));

// 	return 0;
// }
