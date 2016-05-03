/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_room.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 15:48:29 by tmanet            #+#    #+#             */
/*   Updated: 2016/05/03 11:53:13 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

static void	first_last(t_anthill *ah, t_room *room)
{
	if (ah->next_start)
	{
		room->begin = 1;
		ah->start = room;
		ah->next_start = 0;
	}
	if (ah->next_end)
	{
		room->end = 1;
		ah->end = room;
		ah->next_end = 0;
	}
}

static	int	ft_add_room(t_anthill *ah, char *name)
{
	t_room	*rooms;
	t_room	*new_room;

	if (!name || name[0] == 'L' || ah->links_started)
		return (0);
	if (!(new_room = (t_room*)ft_memalloc(sizeof(*new_room))))
		ft_error("room allocation error");
	new_room->name = name;
	first_last(ah, new_room);
	rooms = ah->rooms;
	if (rooms)
	{
		while (rooms->next)
		{
			if (ft_strequ(name, rooms->name))
				return (0);
			rooms = rooms->next;
			new_room->num++;
		}
		new_room->num++;
		rooms->next = new_room;
	}
	else
		ah->rooms = new_room;
	return (1);
}

int			ft_get_room(t_anthill *ah, char *line)
{
	char	**tab;

	tab = ft_strsplit(line, ' ');
	if (!tab[0] || !tab[1] || !tab[2] || !tab[3] || tab[3][0] ||
			tab[0][0] == 'L' || ah->links_started || !ft_isnumber(tab[1]) ||
			!ft_isnumber(tab[2]) || ft_strchr(tab[0], '-'))
		return (0);
	return (ft_add_room(ah, tab[0]));
}
