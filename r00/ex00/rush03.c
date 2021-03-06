/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preuben <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 14:21:31 by preuben           #+#    #+#             */
/*   Updated: 2019/08/04 22:41:46 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			if ((j == 0 && (i == 0 || i == x - 1))
					|| (j == y - 1 && (i == 0 || i == x - 1)))
				ft_putchar('o');
			else if (j == 0 || j == y - 1)
				ft_putchar('-');
			else if (i == 0 || i == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			if (i == x - 1)
				ft_putchar('\n');
			i++;
		}
		i = 0;
		j++;
	}
}
