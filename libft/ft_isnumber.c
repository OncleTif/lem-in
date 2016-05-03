/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 11:36:04 by tmanet            #+#    #+#             */
/*   Updated: 2016/05/03 11:39:12 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnumber(char *str)
{
	int	i;
	int ret;

	i = 0;
	ret = (str[i] != 0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ret = 0;
		i++;
	}
	return (ret);
}
