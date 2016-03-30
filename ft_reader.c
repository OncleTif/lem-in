/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 12:08:19 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/30 18:12:27 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

t_anthill	*ft_reader(void)
{
	t_anthill	*ah;
	int			i;

	i = 1;
	if (!(ah = (t_anthill*)ft_memalloc(sizeof(*ah))))
		ft_error("anthill allocation error");
	while (i)
	{
		i = ft_line_reader(ah);
	}
	return (ah);
}
