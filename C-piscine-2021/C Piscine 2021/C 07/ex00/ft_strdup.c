/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:32:10 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/14 08:32:13 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *str)
{
	int	i;
	int	len;
	char	
		*cpy;

	i = 0;
	len = 0;
	while (str[len] != 0)
		len++;
	cpy = malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	while (str[i] != 0)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

// int main()
// {
// 	char s1[21] = "alae eddine elkorchi";
// 	printf("%s", ft_strdup(s1));
// }