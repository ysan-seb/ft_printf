/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysan-seb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:39:21 by ysan-seb          #+#    #+#             */
/*   Updated: 2017/07/12 15:39:22 by ysan-seb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	i;

	i = 0;
	i = ft_strlen(s1);
	new = malloc(sizeof(char) * (i + 1));
	if (new == NULL)
		return (NULL);
	new = ft_strcpy(new, s1);
	return (new);
}
