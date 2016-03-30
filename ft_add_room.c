/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_room.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 15:48:29 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/30 16:28:26 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

int	ft_add_room(t_anthill *ah, char	*name)
{
	t_room	*rooms;
	t_room	*new_room;

	if (!name || name[0] == 'L')
		return (0);
	if (!(new_room = (t_room*)ft_memalloc(sizeof(*new_room))))
		ft_error("room allocation error");
	new_room->name = name;
	rooms = ah->rooms;
	if (rooms)
	{
		while (rooms->next)
		{
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
