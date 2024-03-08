/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdakech <sdakech@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:30:44 by sdakech           #+#    #+#             */
/*   Updated: 2024/02/20 01:30:44 by sdakech          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long long n, char c)
{
	char	*hexa;
	char	*exa;
	int		i;

	hexa = "0123456789ABCDEF";
	exa = "0123456789abcdef";
	i = 0;
	if (n < 16)
	{
		if (c == 'x')
			i += write(1, &exa[n], 1);
		else if (c == 'X')
			i += write(1, &hexa[n], 1);
		return (i);
	}
	else
	{
		i += ft_puthexa(n / 16, c);
		i += ft_puthexa(n % 16, c);
	}
	return (i);
}
