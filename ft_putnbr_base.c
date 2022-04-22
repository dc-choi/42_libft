/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi.student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:17:05 by donchoi           #+#    #+#             */
/*   Updated: 2022/04/22 16:43:38 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(long long nbr, char *base)
{
	int			baselen;
	long long	tmp;

	tmp = nbr;
	baselen = ft_strlen(base);
	if (tmp >= 0)
	{
		ft_calculate(tmp / baselen, base, baselen);
		write(1, &base[tmp % baselen], 1);
	}
	else
	{
		write(1, "-", 1);
		ft_calculate(-tmp / baselen, base, baselen);
		write(1, &base[-tmp % baselen], 1);
	}
}
