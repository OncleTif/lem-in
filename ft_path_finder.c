/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_finder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 17:23:14 by tmanet            #+#    #+#             */
/*   Updated: 2016/05/03 09:12:43 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

static t_room	*ft_next_finder(t_room *room)
{
	t_room	*nxt;
	t_list	*elem;

	elem = room->links;
	while (elem)
	{
		if ((*(t_room**)elem->content)->lgt < room->lgt)
			nxt = *(t_room**)elem->content;
		elem = elem->next;
	}
	return (nxt);
}

void			ft_path_finder(t_anthill *ah)
{
	t_room	*room;

	room = ah->end;
	while (!room->begin)
	{
		ft_lstpush_back(&ah->bst_path, ft_lstnew(&room, sizeof(room)));
		room = ft_next_finder(room);
	}
}
