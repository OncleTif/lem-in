/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_anthill.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 18:38:18 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/30 18:49:09 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	ft_print_anthill(t_anthill *ah)
{
	t_room	*room;
	t_list	*link;

	room = ah->rooms;
	ft_putstr("ant number : ");
	ft_putnbrendl(ah->ants);
	while (room)
	{
		if (room->begin)
			ft_putendl("FIRST ROOM");
		if (room->end)
			ft_putendl("FINAL ROOM");
		ft_putstr("room : ");
		ft_putendl(room->name);
		ft_putendl("linked to :");
		link = room->links;
		while (link)
		{
			ft_putendl(((t_room*)link->content)->name);
			link = link->next;
		}
		room = room->next;
	}
}
