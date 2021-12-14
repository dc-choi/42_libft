/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:31:51 by donchoi           #+#    #+#             */
/*   Updated: 2021/12/13 17:31:51 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int i)
{
	char	*last;
	char	find;
	size_t	idx;

	last = (unsigned char *)str;
	find = (unsigned char)i;
	idx = 0;
	while (str[idx] != '\0')
		idx++;
	while (idx > 0)
	{
		if (last[idx] == find)
			return (last + idx);
		idx--;
	}
	if (last[idx] == find)
		return (last);
	return (0);
}
