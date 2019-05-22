/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:00:33 by apappas           #+#    #+#             */
/*   Updated: 2019/05/22 09:00:43 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char const *s)
{
	int i;

	while(i != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	return 0;
}
