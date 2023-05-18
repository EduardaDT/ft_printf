/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdionisi <mdionisi@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:14:42 by mdionisi          #+#    #+#             */
/*   Updated: 2022/07/25 18:53:08 by mdionisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n)
{
	int	nb;
	int	count;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	count = 0;
	if (n < 0)
	{
		count += ft_putchar_fd('-');
		nb = (int)(n * -1);
	}
	else
		nb = (int)n;
	if (nb >= 10)
		count += ft_putnbr_fd(nb / 10);
	count += ft_putchar_fd((char)(nb % 10 + 48));
	return (count);
}
