/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_reader.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 15:47:05 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/30 16:52:41 by tmanet           ###   ########.fr       */
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
		ft_com(ah, str);
	else
	{
		if ((end = ft_strchr(str, ' ')))
			ret = ft_add_room(ah, ft_strsub(str, 0, end - str));
		else
			ret = ft_
	}
	ft_strdel(&str);
	return (ret);
}