/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnunes <wnunes@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:21:03 by wnunes            #+#    #+#             */
/*   Updated: 2021/08/23 22:32:54 by wnunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>

/*checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)). In some locales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.*/
int	ft_isalpha(int c);
/*checks for a digit (0 through 9).*/
int	ft_isdigit(int c);
/*checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).*/
int	ft_isalnum(int c);
/*checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.*/
int	ft_isascii(int c);
/* checks for any printable character including space.*/
int	ft_isprint(int c);
/*These functions convert lowercase letters to uppercase.*/
int ft_toupper(int c);
/*These functions convert uppercase letters to lowercase.*/
int ft_tolower(int c);
/*calculate the length of a string*/
size_t ft_strlen(const char *s);
#endif // LIBFT_H
