/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlarod <karlarod@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:50:03 by karlarod          #+#    #+#             */
/*   Updated: 2025/02/16 21:12:10 by karlarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int	ft_int_len(long n)
{
	int		len;

	len = 0;
	if (n == 0)
		len = 1;
	else if (n < 0)
		n = -1 * n;
	while (n > 0)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

int	ft_hex_len(unsigned long n)
{
	int		len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n = n / 16;
		++len;
	}
	return (len);
}

void	*f_new_str(size_t buff, char c)
{
	size_t	i;
	char	*ptr;
	size_t	max_size_t;

	i = 0;
	max_size_t = (size_t) - 1;
	ptr = (char *) malloc(buff + 1);
	if (ptr != NULL)
	{
		while (i < buff)
		{
			ptr[i] = c;
			++i;
		}
		ptr[i] = '\0';
	}
	return ((void *)ptr);
}
