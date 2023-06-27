/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdionisi <mdionisi@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 06:36:24 by mdionisi          #+#    #+#             */
/*   Updated: 2022/07/25 18:47:28 by mdionisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(const char *s, va_list ap)
{
	int	i;

	i = 0;
	if (s[i] == '%')
		return (ft_putchar_fd(s[i]));
	else if (s[i] == 's')
		return (ft_putstr_fd(va_arg(ap, char *)));
	else if (s[i] == 'c')
		return (ft_putchar_fd(va_arg(ap, int)));
	else if (s[i] == 'd')
		return (ft_putnbr_fd(va_arg(ap, unsigned int)));
	else if (s[i] == 'i')
		return (ft_putnbr_fd(va_arg(ap, unsigned int)));
	else if (s[i] == 'u')
		return (ft_putnosign(va_arg(ap, unsigned int)));
	else if (s[i] == 'X' || s[i] == 'x')
		return (ft_hexanbr(va_arg(ap, unsigned int), s[i]));
	else if (s[i] == 'p')
		return (ft_putptr(va_arg(ap, void *)));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(ap, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
			ret += ft_printf_arg(&s[++i], ap);
		else
			ret += ft_putchar_fd(s[i]);
		i++;
	}
	va_end(ap);
	return (ret);
}
/*int main(void)
{
	ft_printf("%p", -1);
	return (0);
}*/
