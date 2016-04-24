#include "lem.h"

void	ft_print_linear(t_anthill *ah)
{
	t_list	*elem;
	int		ants;

	ants = 2;
	while (ants < ah->ants)
	{
		elem = ah->bst_path;
		while (elem)
		{
			if (ants - (*(t_room**)elem->content)->lgt > 0)
			{
				ft_putchar('L');
				ft_putstr((*(t_room**)elem->content)->name);
				ft_putchar('-');
				ft_putnbr(ants - (*(t_room**)elem->content)->lgt);
			}
			elem = elem->next;
		}
		ft_putchar('\n');
		ants++;
	}
}
