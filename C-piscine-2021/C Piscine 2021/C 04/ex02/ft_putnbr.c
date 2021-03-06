/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:33:50 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/03 18:33:52 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char
		x;
	int	d;
	int	m;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb < 10)
	{
		x = nb + 48;
		write(1, &x, 1);
	}
	if (nb > 9)
	{
		d = nb / 10;
		ft_putnbr(d);
		m = nb % 10;
		ft_putnbr(m);
	}
}
