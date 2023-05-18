/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdionisi <mdionisi@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:28:47 by mdionisi          #+#    #+#             */
/*   Updated: 2022/07/25 18:49:16 by mdionisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_print_arg(const char	*s, va_list ap);
int		ft_printf(const char *s, ...);
int		ft_putstr_fd(char *s);
int		ft_itoa_i(unsigned int n);
int		ft_hexanbr(unsigned long n, char c);
int		ft_putnosign(unsigned int n);
size_t	ft_strlen(const char *str);
int		ft_putchar_fd(char c);
int		ft_putnbr_fd(int n);
int		ft_putptr(void *ptr);

#endif
