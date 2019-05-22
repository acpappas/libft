/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:17:20 by apappas           #+#    #+#             */
/*   Updated: 2019/05/22 09:01:02 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	if(n == -2147483648)
		ft_putstr("-2147483648");

	else if(n < 0)
	{
		ft_putchar('-');
		ft_ptnbr(-n);
	}

	else if(n >=10)
	{
		ft_putnbr(n/10);
		ft_putchar(n % 10 + '0');
	}

	else
		ft_putchar(n + '0');
}
