/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/22 13:41:37 by raanghel      #+#    #+#                 */
/*   Updated: 2023/01/17 13:31:30 by raanghel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h> // -> REMOVE!!!!

int		ft_print_char(int c);

int		ft_print_str(char *str);

int		ft_print_d_i(long int n);

int		ft_print_u(unsigned int n);

int		ft_print_hex(long int n, char format);

int		ft_print_ptr(unsigned long n);

int		len_n(long int n);

int		len_hex(long int n);

#endif