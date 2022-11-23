/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: raanghel <raanghel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/22 13:41:37 by raanghel      #+#    #+#                 */
/*   Updated: 2022/11/23 10:14:57 by rares         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h> // -> REMOVE!!!!

int		ft_printf(const char *str, ...);

int		ft_print_char(int c);

int		ft_print_str(char *str);


#endif