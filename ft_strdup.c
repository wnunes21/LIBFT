/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnunes <wnunes@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:28:55 by wnunes            #+#    #+#             */
/*   Updated: 2021/09/11 23:48:42 by wnunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;

	if ((s1 = (char *)malloc(sizeof(const char) * ft_strlen(s) + 1)))
	{
		ft_strcpy(s1, s);
	}
	else
	{
		return (NULL);
	}
	return (s1);
}
