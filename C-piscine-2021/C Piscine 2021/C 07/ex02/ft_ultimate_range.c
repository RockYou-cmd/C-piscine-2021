/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-korc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:36:09 by ael-korc          #+#    #+#             */
/*   Updated: 2021/10/14 15:51:58 by ael-korc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	*range = (int *)malloc((sizeof(int) * len));
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
// int main()
// {
// 	int *arr;
// 	int n = ft_ultimate_range(&arr, -2, 11);
// 	int i=0;
// 	printf("(%d) ", n);
// 	while(i < n)
// 		printf("%d ", arr[i++]);
// }