/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:01:46 by apappas           #+#    #+#             */
/*   Updated: 2019/05/22 09:02:59 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char const *s);

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putstr('\n');
}
