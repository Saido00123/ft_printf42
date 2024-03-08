/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdakech <sdakech@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:38:27 by sdakech           #+#    #+#             */
/*   Updated: 2024/03/08 11:21:32 by sdakech          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long long n)
{
	char	*base16;
	int		i;

	base16 = "0123456789abcdef";
	i = 0;
	if (n < 16)
	{
		i += write(1, &base16[n], 1);
		return (i);
	}
	else
	{
		i += ft_putpointer(n / 16);
		i += ft_putpointer(n % 16);
	}
	return (i);
}
