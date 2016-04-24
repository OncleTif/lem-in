/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 15:13:32 by tmanet            #+#    #+#             */
/*   Updated: 2016/04/19 14:31:19 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

int	main(int argc, char **argv)
{
	t_anthill	*ah;

	argc--;
	argv++;
	ah = ft_reader();
	ft_print_input(ah);
	ft_print_anthill(ah);
	ft_path_finder(ah);
	ft_print_path(ah);
	ft_print_linear(ah);
	return (0);
}
