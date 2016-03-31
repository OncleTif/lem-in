/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_anthill.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 18:38:18 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/31 14:45:33 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	ft_print_anthill(t_anthill *ah)
{
	t_room	*room;

	room = ah->rooms;
	ft_putstr("ant number : ");
	ft_putnbrendl(ah->ants);
	while (room)
	{
		ft_print_room(room);
		room = room->next;
	}
}
