/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/22 13:41:37 by raanghel      #+#    #+#                 */
/*   Updated: 2022/11/22 16:27:44 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include<stdarg.h>
# include<unistd.h>

int		ft_printf(const char *str, ...);

int		ft_print_char(int c);

int		ft_print_str(char *str);


#endif