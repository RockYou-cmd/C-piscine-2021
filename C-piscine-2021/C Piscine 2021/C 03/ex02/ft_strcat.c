/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:52:01 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/02 18:52:03 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	v;

	i = 0;
	while (dest[i] != '\0')
		++i;
	v = 0;
	while (src[v] != '\0')
	{
		dest[i] = src[v];
		i++;
		v++;
	}
	dest[i] = '\0';
	return (dest);
}

//int main()
//{
//	char s1[100] = "I'm a God, ";
//	char s2[] = "don't pray for me.";
//printf("%s", ft_strcat(s1,s2));
//}
