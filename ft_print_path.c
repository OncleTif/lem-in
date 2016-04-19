/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 12:33:52 by tmanet            #+#    #+#             */
/*   Updated: 2016/04/19 14:30:28 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	ft_print_path(t_anthill *ah)
{
	t_list	*elem;

	elem = ah->bst_path;
	while (elem)
	{
		ft_putchar('L');
		ft_putendl((*(t_room**)elem->content)->name);
		elem = elem->next;
	}
}
