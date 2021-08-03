/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 00:11:01 by anjose-d          #+#    #+#             */
/*   Updated: 2021/08/03 00:11:01 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *)s;
	i = 0;
	while (*(ptr + i))
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	if (c == ptr[i])
		return (ptr + i);
	return (ptr = 0);
}
