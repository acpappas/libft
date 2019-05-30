/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:24:23 by apappas           #+#    #+#             */
/*   Updated: 2019/05/30 11:25:33 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen(int nbr)
{
	int i;

	i = 0;
if (nbr < 0)
{
	nbr *= -1;
	i++;
}
while (nbr != 0)
{
	nbr /= 10;
	i++;
}
return (i);
}
