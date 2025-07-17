/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracia- <lgracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:22:11 by lgracia-          #+#    #+#             */
/*   Updated: 2025/07/17 10:35:15 by lgracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (2048);
	else
		return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit('a'));
}*/
