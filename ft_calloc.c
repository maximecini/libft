/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcini-ha <rcini-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:44:52 by rcini-ha          #+#    #+#             */
/*   Updated: 2024/11/20 12:12:47 by rcini-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*src;
	size_t	p;

	src = 0;
	if (size && nmemb > 2147483647 / size)
		return (src);
	p = nmemb * size;
	if (p >= 0)
	{
		src = malloc(p);
		if (src == 0)
			return (src);
		ft_bzero(src, p);
	}
	return (src);
}
