/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_room_finder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 17:23:51 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/30 17:27:11 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

t_room	*ft_room_finder(t_anthill *ah, char *str)
{
	t_room	*room;

	room = ah->rooms;
	while (room && !ft_strequ(str, room->name))
		room = room->next;
	return (room);
}
