/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:14:41 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/05 09:14:43 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	r;

	i = nb;
	r = 0;
	while (r == 0)
	{
		r = ft_is_prime(i);
		if (r == 0)
			i++;
	}
	return (i);
}
// int main ()
// {
// 	printf("%d", ft_find_next_prime(21474836));
// }
