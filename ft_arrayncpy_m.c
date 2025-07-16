/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrayncpy_m.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracia- <lgracia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:35:30 by lgracia-          #+#    #+#             */
/*   Updated: 2025/07/16 16:46:07 by lgracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	**ft_arrayncpy(char **dest, char **src, size_t n, size_t start)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = ft_strdup(&src[i][start]);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
