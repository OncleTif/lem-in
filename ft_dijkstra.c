/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dijkstra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 12:29:23 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/31 17:21:58 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

static void	ft_update_neighbours(t_list *list, int lgt)
{
	t_list	*elem;
	t_room	*ngh;

	elem = list;
	while (elem)
	{
		ngh = *(t_room**)elem->content;
		if (ngh->lgt > lgt || (!ngh->lgt && !ngh->begin))
			ngh->lgt = lgt;
		elem = elem->next;
	}
}

void		ft_dijkstra(t_room *room)
{
	t_list	*elem;

	if (!room->end)
	{
		elem = room->links;
		ft_update_neighbours(room->links, room->lgt + 1);
		while (elem)
		{
			if (room->lgt + 1 == (*(t_room**)elem->content)->lgt)
				ft_dijkstra(*(t_room**)elem->content);
			elem = elem->next;
		}
	}
}
