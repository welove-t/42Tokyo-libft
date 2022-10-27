/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:19:39 by terabu            #+#    #+#             */
/*   Updated: 2022/10/24 09:40:28 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(0 - n % 10 + '0', fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// #include <stdio.h>
// int main()
// {
// 	ft_putnbr_fd(123,0);
// 	putchar('\n');
// 	ft_putnbr_fd(-123,0);
// 	putchar('\n');
// 	ft_putnbr_fd(INT_MAX,0);
// 	putchar('\n');
// 	ft_putnbr_fd(INT_MIN,0);
// 	putchar('\n');
// 	return 0;
// }
