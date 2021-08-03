/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 00:09:47 by anjose-d          #+#    #+#             */
/*   Updated: 2021/08/03 00:09:48 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	if (!s)
		return (0);
	ptr = (unsigned char *)s;
	while ((i < n || ptr[i] != (unsigned char)c) && ptr[i])
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
