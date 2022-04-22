/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi.student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:16:12 by donchoi           #+#    #+#             */
/*   Updated: 2022/04/22 16:43:27 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calculate(long long nbr, char *base, int baselen)
{
	if (nbr == 0)
		return ;
	ft_calculate(nbr / baselen, base, baselen);
	write(1, &base[nbr % baselen], 1);
}
