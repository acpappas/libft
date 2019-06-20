/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:56:02 by apappas           #+#    #+#             */
/*   Updated: 2019/06/13 14:56:04 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char                    **ft_strsplit(char const *s, char c)
{
         int             count;
         char            **splstr;

 
        if (!s)
                 return (NULL);
         count = ft_wcount(s, c);
         splstr = (char **)malloc(sizeof(char *) * (count + 1));
         if (splstr == NULL)
                 return (NULL);
        count = 0;
         while (*s)
         {
                 while (*s == c && *s != '\0')
                         s++;       
                 splstr[count]  = (char *)malloc(sizeof(char) * (ft_wlength(s, c) + 1));
                 
                 while (*s != c && *s)
                 {
                         *(*(splstr + count)) = *s;
                         *(splstr + count) += 1;
                         s++;
                 }
                 *(*(splstr + count)) = '\0';
                 count++;
                 
         }
         *(splstr + count) = 0;
         return (splstr);
}
