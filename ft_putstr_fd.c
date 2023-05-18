/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdionisi <mdionisi@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:50:51 by mdionisi          #+#    #+#             */
/*   Updated: 2022/07/25 18:57:03 by mdionisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
			write (1, &s[i++], 1);
	}
	else
		return (write(1, "(null)", 6));
	return (i);
}