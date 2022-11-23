/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   len_n.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 17:12:50 by raanghel      #+#    #+#                 */
/*   Updated: 2022/11/23 17:13:40 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	len_n(long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
