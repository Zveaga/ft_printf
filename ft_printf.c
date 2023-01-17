/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/22 14:39:19 by raanghel      #+#    #+#                 */
/*   Updated: 2023/01/17 13:52:02 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	formats(va_list arg_pointer, char format)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret += ft_print_char(va_arg(arg_pointer, int));
	else if (format == 's')
		ret += ft_print_str(va_arg(arg_pointer, char *));
	else if (format == 'd' || format == 'i')
		ret += ft_print_d_i(va_arg(arg_pointer, int));
	else if (format == 'u')
		ret += ft_print_u(va_arg(arg_pointer, unsigned int));
	else if (format == 'X' || format == 'x')
		ret += ft_print_hex((va_arg(arg_pointer, long int)), format);
	else if (format == '%')
		ret += ft_print_char('%');
	else if (format == 'p')
	{
		ret += write(1, "0x", 2);
		ret += ft_print_ptr((va_arg(arg_pointer, unsigned long)));
	}
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
	while (str[i])
	{
		if (str[i] != '%')
		{
			write (1, &str[i], 1);
			ret++;
		}
		else
		{	
			i++;
			ret += formats(arg_pointer, str[i]);
		}
		if (str[i] != '\0')
			i++;
	}
	va_end(arg_pointer);
	return (ret);
}

int	main (void)
{
	// char	a = 10;
	// char	*p = &a;
	// ft_printf("Own output:  ");
	// ft_printf("Own ret:  %d \n\n", ft_printf("%s %d %u %i %X %x %p\n", "123456", -100, 200, -300, 24245, 24245, p));

	// printf("Real output: ");
	// printf("Real ret: %d\n", printf("%s %d %u %i %X %x %p\n", "123456", -100, 200, -300, 24245, 24245, p));

	ft_printf("Own output:  ");
	ft_printf("Own ret:  %d \n\n", ft_printf(")Zh%%Eae/Z%x+iu/\f%iFP$aa\rW%iI\v}LZ=%p4kJvzBU%u\vA3>}\n%saH4%xzDNF7%d", -1945810700, 1727217360, 1907239326, (void *)4438791535928901553, -1437421222, "j-]%(|4!}#.@Bcta,#u\t8#29fTAyCN|<w,fM!&V4]l(V~|O\v*pGZ3hY!vKIs0e-O;^5j\nV\rKwSnZ\"1%#AhZH;XEy?)BU", 1897326673, -1669000809));

	printf("Real output: ");
	printf("Real ret: %d\n", printf(")Zh%%Eae/Z%x+iu/\f%iFP$aa\rW%iI\v}LZ=%p4kJvzBU%u\vA3>}\n%saH4%xzDNF7%d", -1945810700, 1727217360, 1907239326, (void *)4438791535928901553, -1437421222, "j-]%(|4!}#.@Bcta,#u\t8#29fTAyCN|<w,fM!&V4]l(V~|O\v*pGZ3hY!vKIs0e-O;^5j\nV\rKwSnZ\"1%#AhZH;XEy?)BU", 1897326673, -1669000809));
}

