/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_reader.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 15:47:05 by tmanet            #+#    #+#             */
/*   Updated: 2016/05/04 10:34:49 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

int	ft_line_reader(t_anthill *ah)
{
	char	*str;
	char	*end;
	int		ret;

	ret = 1;
	if ((get_next_line(0, &str)) < 1)
		return (0);
	if (str[0] == '#')
		ret = ft_com(ah, str);
	else if (ah->not_first)
	{
		if ((end = ft_strchr(str, ' ')))
			ret = ft_get_room(ah, str);
		else
			ret = ft_add_link(ah, str);
	}
	else
	{
		ah->ants = ft_atoi_strict(str);
		ah->not_first = 1;
	}
	if (ret)
		ft_lstpush_back(&ah->input, ft_lstnew(&str, sizeof(str)));
	return (ret);
}
