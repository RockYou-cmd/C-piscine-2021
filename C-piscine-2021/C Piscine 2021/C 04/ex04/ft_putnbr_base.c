/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:06:37 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/13 10:06:46 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_base(unsigned int nbr, char *base, unsigned int len)
{
	if (nbr < len)
		write(1, &base[nbr], 1);
	else
	{
		put_base(nbr / len, base, len);
		put_base(nbr % len, base, len);
	}
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0])
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	if (ft_check_base(base))
	{
		i = 0;
		while (base[i] != 0)
			i++;
		if (nbr > 0)
		{
			put_base(nbr, base, i);
		}
		else
		{
			write (1, "-", 1);
			put_base(-nbr, base, i);
		}
	}
}
