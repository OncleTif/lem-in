/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_anthill_validator.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 19:00:21 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/30 19:13:28 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	ft_anthill_validator(t_anthill *ah)
{
	if (!ah->start)
		ft_error("Missing Start");
	if (!ah->end)
		ft_error("Missing End");
	if (ah->start != ah->end)
	{
		if (!ah->start->links)
			ft_error("No links from starts");
		if (!ah->end->links)
			ft_error("No links to end");
	}
}
