/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracia- <lgracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:40:30 by lgracia-          #+#    #+#             */
/*   Updated: 2025/07/17 10:35:19 by lgracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

short	ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1024);
	else if (c > 96 && c < 123)
		return (1024);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('*'));
}*/
