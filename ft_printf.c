/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/22 14:39:19 by raanghel      #+#    #+#                 */
/*   Updated: 2022/11/23 10:01:42 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"
#include<stdio.h>

int	formats(va_list arg_pointer, char format)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret += ft_print_char(va_arg(arg_pointer, int));
	else if (format == 's')
		ret += ft_print_str(va_arg(arg_pointer, char *));
	// else if (format == 'p')
	// else if (format == 'd')
	// else if (format == 'i')
	// else if (format == 'u')
	// else if (format == 'x')
	// else if (format == 'X')
	// else if (format == '%')

	return (ret);
}


int	ft_printf(const char *str, ...)
{
	unsigned int	i;
	int				ret;
	va_list			arg_pointer;

	i = 0;
	ret = 0;
	va_start(arg_pointer, str);
	while (str[i] && str)
	{
		if (str[i] != '%')
		{
			write (1, &str[i], 1);
			ret++;
		}
		else
		{
			formats(arg_pointer, str[i + 1]);
			ret++;
		}
		if (str[i] != '\0')
			i++;
	}
	va_end(arg_pointer);
	return (ret);

}

// int	main (void)
// {
// 	printf("My name is %s and I love %s !", "Rares", "coding");
// }