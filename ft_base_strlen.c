/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi.student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:18:11 by donchoi           #+#    #+#             */
/*   Updated: 2022/04/22 16:44:02 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_base_strlen(int baselen, unsigned long long num, int t)
{
	int	ans;

	ans = 0;
	if (num == 0)
		return (1);
	if (t != 0)
	{
		num = (long long)num;
		if (num < 0)
			ans++;
	}
	while (num)
	{
		num /= baselen;
		ans++;
	}
	return (ans);
}
