/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracia- <lgracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:07:45 by lgracia-          #+#    #+#             */
/*   Updated: 2025/07/17 12:53:36 by lgracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short	ft_toupper(int c)
{
	if (c < 123 && c > 96)
		c -= 32;
	return (c);
}
/*
#include <stdio.h>

int	main()
{
	printf("%c", ft_toupper('A'));
	printf("%c", ft_toupper('a'));
	printf("%c", ft_toupper('z'));
	printf("%c", ft_toupper('Z'));
}*/
