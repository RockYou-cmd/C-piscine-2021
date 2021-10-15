/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 08:05:29 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/06 08:05:31 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_hexa(unsigned char b)
{
	write (1, "\\", 1);
	write (1, &"0123456789abcdef"[b / 16], 1);
	write (1, &"0123456789abcdef"[b % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	c;
	int	
			i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			get_hexa(str[i]);
		else
		{
			c = str[i];
			write(1, &c, 1);
		}
		i++;
	}
}
// int main ()
// {
//     ft_putstr_non_printable("alae e,\nddine");
// }
