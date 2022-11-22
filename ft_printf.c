#include<stdio.h>
#include<stdarg.h>

int	formats(va_list arg_pointer, char format)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret += 
	else if (format == 's')
	else if (format == 'p')
	else if (format == 'd')
	else if (format == 'i')
	else if (format == 'u')
	else if (format == 'x')
	else if (format == 'X')
	else if (format == '%')

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
			i++;
			ret++;
		}
		else if (str[i] == '%')
		{
			ret += formats ();
		}
			
	}

	return (ret);
	printf("rares: %d", ret);

}

printf("rares: %d", );