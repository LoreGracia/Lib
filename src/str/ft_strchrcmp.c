/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracia- <lgracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:24:21 by lgracia-          #+#    #+#             */
/*   Updated: 2025/07/17 10:24:51 by lgracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short	ft_strchrcmp(char *s, char *c, int n)
{
	int	j;
	int	i;

	if (!s || !c)
		return (0);
	j = 0;
	while (c[j])
	{
		i = 0;
		while (s[i] && i < n)
		{
			if (s[i] == c[j])
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}