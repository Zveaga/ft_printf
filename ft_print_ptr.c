/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ptr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/13 14:24:04 by raanghel      #+#    #+#                 */
/*   Updated: 2023/01/13 16:59:07 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	len_ptr(uintptr_t n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_print_ptr(long int n)
{
	char	*dict;
	int		ret;
	
	ret = len_ptr(n);
	dict = "0123456789abcdef";
	if (n < 0)
	{
		ft_print_char('-');
		n *= -1;
	}
	if (n >= 0 && n <= 16)
		ft_print_char(dict[n]);
	else
	{
		ft_print_ptr(n / 16);
		ft_print_ptr(n % 16);
	}
	return (ret);
}