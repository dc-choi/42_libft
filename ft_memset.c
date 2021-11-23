/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:12:27 by donchoi           #+#    #+#             */
/*   Updated: 2021/11/23 16:12:27 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int i, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	src;
	size_t			i;

	new_dest = dest;
	src = i;
	i = 0;
	while (i < n)
	{
		*new_dest = src;
		i++;
	}
	return (dest);
}