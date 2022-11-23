/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_d.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rares <rares@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 10:13:43 by rares         #+#    #+#                 */
/*   Updated: 2022/11/23 10:33:42 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_print_d(long int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
	{
		n *= -1;
		write(1, '-', 1);
		ret++;
	}
	if (n > 0 && n <= 9)
	{
		n += '0';
		write(1, &n, 1);
		ret++;
	}
	else
	{
		ft_print_d(n / 10);
		ft_print_d(n % 10);
	}
	return (ret);
}