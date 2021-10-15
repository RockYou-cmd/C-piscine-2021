/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:48:31 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/09 18:48:32 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (c < argc)
	{	
		i = 0;
		while (argv[c][i] != 0)
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		c++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	count;
	char	
		*tmp;

	count = 1;
	while (count < argc - 1)
	{
		if (ft_strcmp(argv[count], argv[count + 1]) > 0)
		{
			tmp = argv[count];
			argv[count] = argv[count + 1];
			argv[count + 1] = tmp;
			count = 1;
		}
		else
			count ++;
	}
	ft_print_params(argc, argv);
}
