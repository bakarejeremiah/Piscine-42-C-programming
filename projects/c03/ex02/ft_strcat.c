/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:15:22 by coder             #+#    #+#             */
/*   Updated: 2022/02/24 22:21:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	b = 0;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
