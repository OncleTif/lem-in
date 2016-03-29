/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 15:14:36 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/29 12:08:53 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_H
# define LEM_H
# include "libft/libft.h"

typedef struct s_room		t_room;
typedef struct s_anthill	t_anthill;

struct						s_anthill
{
	int			ants;


};

struct						s_room
{
	char		*name;
	int			begin;
	int			end;


};

#endif
