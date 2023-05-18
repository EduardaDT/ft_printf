/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdionisi <mdionisi@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:57:24 by mdionisi          #+#    #+#             */
/*   Updated: 2022/07/25 18:56:17 by mdionisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr( void *ptr)
{
	unsigned long int	len;
	unsigned long int	nb;

	len = 0;
	nb = (unsigned long int) ptr;
	if (nb < 16)
		len += ft_putstr_fd("0x");
	if (nb >= 16)
		len += ft_putptr((void *)(nb / 16));
	if (nb % 16 >= 10)
		len += ft_putchar_fd(((nb % 16) - 10) + 'a');
	else
		len += ft_putchar_fd((nb % 16) + '0');
	return (len);
}
