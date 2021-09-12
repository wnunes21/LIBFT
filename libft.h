/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnunes <wnunes@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:21:03 by wnunes            #+#    #+#             */
/*   Updated: 2021/09/11 23:55:51 by wnunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

/*   checks for an alphabetic character; in the standard "C" locale, it is    */
/*   equivalent to (isupper(c) || islower(c)). In some locales, there may     */
/*   be additional characters for which isalpha() is true—letters which are   */
/*   neither uppercase nor lowercase.                                         */
int	ft_isalpha(int c);
/*   checks for a digit (0 through 9).                                        */
int	ft_isdigit(int c);
/*   checks for an alphanumeric character; it is equivalent to (isalpha(c)    */
/*   || isdigit(c)).                                                          */
int	ft_isalnum(int c);
/*   checks whether c is a 7-bit unsigned char value that fits into the       */
/*   ASCII character set.                                                     */
int	ft_isascii(int c);
/*   checks for any printable character including space.                      */
int	ft_isprint(int c);
/*   These functions convert lowercase letters to uppercase.                  */
int	ft_toupper(int c);
/*   These functions convert uppercase letters to lowercase.                  */
int	ft_tolower(int c);
/*   calculate the length of a string                                         */
size_t	ft_strlen(const char *s);
/*   The strcpy() function copies the string pointed to by src, including     */
/*   the terminating null byte ('\0'), to the buffer pointed to by dest.      */
char	*ft_strcpy(char *dest, const char *src);
/*   The  strdup()  function  returns a pointer to a new string which is a    */
/*   duplicate of the string s.                                               */
char	*ft_strdup(const char *s);
/*   The strchr() function returns a pointer to the first occurrence of the   */
/*   character c in the string s.                                             */
char	*ft_strchr(const char *s, int c);
/*   The strrchr() function returns a pointer to the last occurrence of the   */
/*   character c in the string s.                                             */
char	*ft_strrchr(const char *s, int c);
/*   The bzero() function erases the data in the n bytes of the memory        */
/*   starting at the location pointed to by s, by writing zeros (bytes        */
/*   containing '\0') to that area.                                           */
void	ft_bzero(void *s, size_t n);
#endif // LIBFT_H
