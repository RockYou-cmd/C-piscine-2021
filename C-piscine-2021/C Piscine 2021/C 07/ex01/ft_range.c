/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 08:58:24 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/14 15:52:58 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	len;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	range = (int *)malloc((sizeof(int) * len));
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
// int main()
// {
// 	int *arr =  ft_range(-20, 10);
// 	int i=0;
// 	while(i < 30)
// 		printf("%d ", arr[i++]);
// }
