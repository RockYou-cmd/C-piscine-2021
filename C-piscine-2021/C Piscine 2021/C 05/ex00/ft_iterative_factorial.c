/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:04:13 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/05 09:04:17 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	factorial = 1;
	while (++i <= nb)
	{
		factorial = factorial * i;
	}
	return (factorial);
}

// int main()
// {
// 	printf("%d", ft_iterative_factorial(3));
// }
