/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <	almichel@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:29:27 by almichel          #+#    #+#             */
/*   Updated: 2023/11/09 17:09:01 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		sum;
	char	*dest;
	int		i;

	i = 0;
	sum = nmemb * size;
	dest = malloc(sum);
	if (!dest)
		return (NULL);
	while (sum--)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
