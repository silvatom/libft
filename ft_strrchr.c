/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 00:11:52 by anjose-d          #+#    #+#             */
/*   Updated: 2021/08/03 00:11:53 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	*lst_occ;

	ptr = (char *)s;
	lst_occ = 0;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == c)
			lst_occ = &ptr[i];
		i++;
	}
	if (c == ptr[i])
		return (ptr + i);
	return (lst_occ);
}
