/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdakech <sdakech@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:30:52 by sdakech           #+#    #+#             */
/*   Updated: 2024/02/20 01:30:52 by sdakech          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	len;

	len = 0;
	len += write(1, &c, 1);
	return (len);
}

int	ft_putstring(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s)
	{
		j += write(1, "(null)", 6);
		return (j);
	}
	while (s[i])
	{
		j += write(1, &s[i], 1);
		i ++;
	}
	return (j);
}
