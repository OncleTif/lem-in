/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_com.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 16:12:15 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/30 16:20:03 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	ft_com(t_anthill *ah, char *str)
{
	if (ft_strequ(str, "##start"))
		ah->next_start = 1;
	else if (ft_strequ(str, "##end"))
		ah->next_end = 1;
}
