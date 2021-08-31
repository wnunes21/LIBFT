/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnunes <wnunes@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:24:15 by wnunes            #+#    #+#             */
/*   Updated: 2021/08/22 19:08:31 by wnunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Função isdigit verifica se a variavel é um número inteiro ('0' -> '9')      */
/*Se a variavel passada é um número inteiro, ele retorna 1 se                 */
/*não ele retorna 0.                                                          */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
