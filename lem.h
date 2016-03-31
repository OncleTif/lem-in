/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 15:14:36 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/31 17:20:23 by tmanet           ###   ########.fr       */
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
	t_room		*rooms;
	t_room		*start;
	t_room		*end;
	int			next_start;
	int			next_end;
	int			not_first;
	t_list		*input;
	t_list		*bst_path;
};

struct						s_room
{
	char		*name;
	int			begin;
	int			end;
	int			num;
	int			lgt;
	t_room		*next;
	t_list		*links;
};

t_anthill					*ft_reader(void);
int							ft_add_room(t_anthill *ah, char *name);
void						ft_com(t_anthill *ah, char *str);
t_room						*ft_room_finder(t_anthill *ah, char *str);
int							ft_add_link(t_anthill *ah, char *str);
int							ft_line_reader(t_anthill *ah);
void						ft_print_room(t_room *room);
void						ft_print_anthill(t_anthill *ah);
void						ft_print_input(t_anthill *ah);
void						ft_anthill_validator(t_anthill *ah);
void						ft_dijkstra(t_room *room);
#endif
