/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:44:09 by yrahmoun          #+#    #+#             */
/*   Updated: 2021/09/27 10:50:36 by yrahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print2(int i, int j, int x, int y)
{
	if (i > 0 && i < x - 1 && j > 0 && j < y - 1)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar(42);
	}
}

void	print(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
	{
		ft_putchar(47);
	}
	else if (i == x - 1 && j == 0)
	{
		ft_putchar(92);
	}
	else if (i == 0 && j == y - 1)
	{
		ft_putchar(92);
	}
	else if (i == x - 1 && j == y - 1)
	{
		ft_putchar(47);
	}
	else
	{
		print2(i, j, x, y);
	}
}

void	rush01(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			print(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
