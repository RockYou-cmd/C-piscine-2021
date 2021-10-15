/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 07:37:15 by ael-korc          #+#    #+#             */
/*   Updated: 2021/09/27 07:37:17 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	dorder;

	dorder = 'z';
	while (dorder >= 'a')
	{
		write (1, &dorder, 1);
		dorder--;
	}
}
