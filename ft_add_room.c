/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_room.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 15:48:29 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/30 16:04:51 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	ft_add_room(t_anthill *ah, char	*name)
{
	t_room	*rooms;
	t_room	*new_room;

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
}
