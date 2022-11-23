/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_d_i.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 10:13:43 by rares         #+#    #+#                 */
/*   Updated: 2022/11/23 17:38:44 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_print_d_i(long int n)
{
	int	ret;

	ret = len_n(n);
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n >= 0 && n <= 9)
	{
		n += '0';
		write(1, &n, 1);
	}
	else
	{
		ft_print_d_i(n / 10);
		ft_print_d_i(n % 10);
	}
	return (ret);
}
