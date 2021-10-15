/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:51:49 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/02 18:51:50 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != 0 && s2[i] != 0 && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
	// char s1[] = "aaaaaaadg";
	// char s2[] = "aaaaaateh";
// printf("%d", ft_strcmp(s1,s2,7));
// }
