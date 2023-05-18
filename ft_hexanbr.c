/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexanbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdionisi <mdionisi@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:22:11 by mdionisi          #+#    #+#             */
/*   Updated: 2022/07/25 18:44:58 by mdionisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexanbr(unsigned long n, char c)
{
	long int	i;
	int			convert;

	i = 0;
	convert = 0;
	if (c == 'x')
		convert = 32;
	if (n >= 16)
	{
		i += ft_hexanbr(n / 16, c);
	}
	if (n % 16 <= 9)
	{
		i++;
		ft_putchar_fd(n % 16 + 48);
	}
	else
	{
		i++;
		ft_putchar_fd(n % 16 + 55 + convert);
	}
	return (i);
}
