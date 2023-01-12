/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_X_x.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/14 14:42:33 by raanghel      #+#    #+#                 */
/*   Updated: 2023/01/12 17:39:20 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_print_x(long	int	n)
{
	char	*dict;
	int		ret;

	ret = 0;
	dict = "0123456789ABCDEF";

	if (n < 0)
	{
		ret += ft_print_char('-');
		n *= -1;
	}
	if (n >= 0 && n <= 16)
		ret += ft_print_char(dict[n]);
	else
	{
		ft_print_x(n / 16);
		ft_print_x(n % 16);
	}
	return (ret);
}

// int	main(void)
// {
// 	ft_print_x(-21474836483);
// 	//printf ("%d\n", ft_print_x(421));
// }

// int	ft_print_x(long int	n)
// {
// 	int				ret;
// 	int				i;
// 	long int		remainder;
// 	char			store_remainder[1000];

// 	i = 0;
// 	if (n < 0)
// 	{
// 		n *= -1;
// 		write(1, "-", 1);
// 	}
// 	if (n == 0)
// 		write(1, "0", 1);
// 	while (n != 0)
// 	{
// 		remainder = n % 16;
// 		n = n / 16;
// 		if (remainder <= 9)
// 			store_remainder[i++] = remainder + 48;
// 		else
// 			store_remainder[i++] = remainder + 55;
// 	}
// 	while (i >= 0)
// 		write(1, &store_remainder[i--], 1);
// 	ret = len_n(n);
// 	return (ret);
// }