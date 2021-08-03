/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 00:09:08 by anjose-d          #+#    #+#             */
/*   Updated: 2021/08/03 00:09:10 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;
	size_t	i;

	ret = malloc(count * size);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < count)
	{
		ret[i] = 0;
		i++;
	}
	return ((void *)ret);
}
