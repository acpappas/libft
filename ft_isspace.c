/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:16:17 by apappas           #+#    #+#             */
/*   Updated: 2019/05/30 09:19:57 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	int i;

	i = 0;

	while (c == "\t" "\n" "\v" "\f" "\r" " ")
		i++;
	return (i);
	return (0);
