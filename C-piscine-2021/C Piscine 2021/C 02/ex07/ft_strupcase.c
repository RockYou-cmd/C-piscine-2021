/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 20:12:06 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/01 20:12:14 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;
	int	
			i;

	i = 0;
	ptr = str;
	while (ptr[i] != 0)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
		ptr++;
	}
	return (str);
}
//int main()
//{
//	char tab[] = "alae";
//	printf("%s", ft_strupcase(tab));
//}
