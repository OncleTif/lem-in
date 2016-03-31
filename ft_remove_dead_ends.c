/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_dead_ends.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 11:33:41 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/31 12:05:16 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

static int	ft_dead_end(t_room *room)
{
	t_room	*nghb;
	t_list	*list;

	nghb = (t_room*)room->links->content;
	if (nghb && !room->links->next)
	{
list = nghb->links;
while ((t_room*)list->content != room)
	list = list->next;

		return (1);
	}
	return (0);
}

void	ft_remove_dead_ends(t_anthill *ah)
{
	int		mod;
	t_room	*room;

	mod = 1;
	while (mod)
	{
		mod = 0;
		room = ah->rooms;
		while (room)
		{
			mod = mod;
			room = room->next;
		}
	}
}
