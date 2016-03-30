/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 12:08:19 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/30 15:52:25 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

t_anthill	*ft_reader(void)
{
	t_anthill	*ah;
	char		*str;


	if (!(ah = (t_anthill*)ft_memalloc(sizeof(*ah))))
		ft_error("anthill allocation error");
	while (get_next_line(0, &str))
	{



	}
	return (ah);
}
