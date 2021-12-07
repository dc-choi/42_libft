/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:35:59 by donchoi           #+#    #+#             */
/*   Updated: 2021/11/29 11:35:59 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *d, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = d;
	i = 0;
	while (i < n)
	{
		*dest = 0;
		*dest++;
		i++;
	}
	return (d);
}
