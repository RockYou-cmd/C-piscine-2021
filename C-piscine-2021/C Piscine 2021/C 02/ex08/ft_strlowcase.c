/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 20:12:21 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/01 20:12:22 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;
	int	
			i;

	i = 0;
	ptr = str;
	while (ptr[i] != 0)
	{
		if (ptr[i] >= 'A' && ptr[i] <= 'Z')
			ptr[i] = ptr[i] + 32;
		ptr++;
	}
	return (str);
}
//int main()
//{
//char tab[] = "ALAE";
//printf("%s", ft_strlowcase(tab));
//}
