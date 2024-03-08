/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdakech <sdakech@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:30:56 by sdakech           #+#    #+#             */
/*   Updated: 2024/02/20 01:30:56 by sdakech          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_printhelp(va_list arg, const char s)
{
	int	len;

	len = 0;
	if (s == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (s == 's')
		len += ft_putstring(va_arg(arg, char *));
	else if (s == 'p')
	{
		len += write(1, "0", 1);
		len += write(1, "x", 1);
		len += ft_putpointer(va_arg(arg, unsigned long long));
	}
	else if (s == 'd' || s == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (s == 'u')
		len += ft_putunsigned(va_arg(arg, unsigned int));
	else if (s == 'x')
		len += ft_puthexa(va_arg(arg, long long), 'x');
	else if (s == 'X')
		len += ft_puthexa(va_arg(arg, unsigned long long), 'X');
	else
		len += write(1, &s, 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		returnvalue;

	i = 0;
	returnvalue = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			returnvalue += ft_printhelp(arg, str[i + 1]);
			i++;
		}
		else
			returnvalue += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (returnvalue);
}
