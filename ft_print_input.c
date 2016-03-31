/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 12:13:13 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/31 12:23:40 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	ft_print_input(t_anthill *ah)
{
	t_list	*elem;

	elem = ah->input;
	while (elem)
	{
		ft_putendl(*(char**)elem->content);
		elem = elem->next;
	}
}
