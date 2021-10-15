/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:52:15 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/02 18:52:16 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	v;

	i = 0;
	v = 0;
	if (nb == 0)
	{
		return (dest);
	}
	while (dest[i] != 0)
		++i;
	while (src[v] != 0 && v < nb)
	{
		dest[i] = src[v];
		v++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// int main()
// {
// 	char s1[100] = "im a god";
// 	char s2[] = "dont pray for me";
// 	char s3[100] = "im a god";
// 	printf("%s\n", ft_strncat(s1,s2,17));
// 	printf("%s\n", strncat(s3,s2,17));
// 	return 0;    
// }
