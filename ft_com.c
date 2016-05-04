/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_com.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 16:12:15 by tmanet            #+#    #+#             */
/*   Updated: 2016/05/04 10:01:20 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

int	ft_com(t_anthill *ah, char *str)
{
	if (ft_strequ(str, "##start"))
	{
		if (ah->next_end || ah->next_start || ah->start)
			return (0);
		ah->next_start = 1;
	}
	else if (ft_strequ(str, "##end"))
	{
		if (ah->next_start || ah->next_end || ah->end)
			return (0);
		ah->next_end = 1;
	}
	return (1);
}
