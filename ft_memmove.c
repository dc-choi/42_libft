/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:26:10 by donchoi           #+#    #+#             */
/*   Updated: 2021/11/30 13:26:10 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		new_dest = (unsigned char *)dest;
		new_src = (unsigned char *)src;
		while (n)
		{
			*new_dest = *new_src;
			*new_dest++;
			n--;
		}
	}
	else
	{
		new_dest = dest + (n - 1);
		new_src = src + (n - 1);
		while (n)
		{
			*new_dest = *new_src;
			*new_dest--;
			*new_src--;
			n--;
		}
	}
	return (dest);
}
