/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracia- <lgracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:52:03 by lgracia-          #+#    #+#             */
/*   Updated: 2025/07/17 12:53:59 by lgracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isascii('i'));
	printf("%d\n", ft_isascii(-128));
}*/
