/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdakech <sdakech@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:30:59 by sdakech           #+#    #+#             */
/*   Updated: 2024/02/20 01:30:59 by sdakech          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_puthexa(unsigned long long n, char c);
int	ft_putchar(char c);
int	ft_putstring(char *s);
int	ft_printf(const char *str, ...);
int	ft_putnbr( long long nb);
int	ft_putunsigned(unsigned int nb);
int	ft_putpointer(unsigned long long n);

#endif