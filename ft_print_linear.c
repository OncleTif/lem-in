#include "lem.h"

static void	ft_linear_cycle(t_anthill *ah, int ants)
{
	t_list	*elem;
	int		first;

	first = 1;
	elem = ah->bst_path;
	while (elem)
	{
		if (ants - (*(t_room**)elem->content)->lgt > 0 &&
				ants - (*(t_room**)elem->content)->lgt <= ah->ants)
		{
			if (!first)
				ft_putchar(' ');
			first = 0;
			ft_putchar('L');
			ft_putstr((*(t_room**)elem->content)->name);
			ft_putchar('-');
			ft_putnbr(ants - (*(t_room**)elem->content)->lgt);
		}
		elem = elem->next;
	}
}

void	ft_print_linear(t_anthill *ah)
{
	int		ants;

	ants = 1;
	while (ants <= ah->ants + ah->end->lgt)
	{
		ft_linear_cycle(ah, ants);
		ft_putchar('\n');
		ants++;
	}
}
