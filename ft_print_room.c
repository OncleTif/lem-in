/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_room.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 14:43:08 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/31 15:33:14 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	ft_print_room(t_room *room)
{
	t_list	*link;

	if (room->begin)
		ft_putendl("FIRST ROOM");
	if (room->end)
		ft_putendl("FINAL ROOM");
	ft_putstr("room : ");
	ft_putendl(room->name);
	ft_putstr("length from start: ");
	ft_putnbrendl(room->lgt);
	ft_putendl("linked to :");
	link = room->links;
	while (link)
	{
		ft_putendl((*(t_room**)link->content)->name);
		link = link->next;
	}
}
