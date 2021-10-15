/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:40:57 by ael-korc          #+#    #+#             */
/*   Updated: 2021/09/28 11:40:58 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	p;
	int	temp;

	p = 0;
	while (p < size - 1)
	{
		if (tab[p] > tab[p + 1])
		{				
			temp = tab[p];
			tab[p] = tab[p + 1];
			tab[p + 1] = temp;
			p = 0;
		}
		else
			p ++;
	}
}
