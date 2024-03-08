/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdakech <sdakech@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:31:03 by sdakech           #+#    #+#             */
/*   Updated: 2024/02/20 01:31:03 by sdakech          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr( long long nb)
{
	int			i;

	i = 0;
	if (nb < 0)
	{
		i += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		i += ft_putchar(nb + '0');
		return (i);
	}
	i += ft_putnbr(nb / 10);
	i += ft_putchar(nb % 10 + '0');
	return (i);
}

int	ft_putunsigned(unsigned int nb)
{
	int			i;

	i = 0;
	if (nb < 10)
	{
		i += ft_putchar(nb + '0');
		return (i);
	}
	i += ft_putnbr(nb / 10);
	i += ft_putchar(nb % 10 + '0');
	return (i);
}
