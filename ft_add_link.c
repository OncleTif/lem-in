/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_link.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 16:56:25 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/30 17:57:38 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

int	ft_add_link(t_anthill *ah, char	*str)
{
	char	**tab;
	t_room	*room1;
	t_room	*room2;

	tab = ft_strsplit(str, '-');
	room1 = ft_room_finder(ah, tab[0]);
	room2 = ft_room_finder(ah, tab[1]);
	if (!room1 || !room2 || room1 == room2)
		return (0);
	ft_lstpush_back(&room1->links, ft_lstnew(room2, sizeof(room2)));
	ft_lstpush_back(&room2->links, ft_lstnew(room1, sizeof(room1)));
	return (1);
}
