/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 08:23:45 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 08:32:42 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	med;
	int	*range;

	if (min >= max)
		return (0);
	med = max - min;
	range = malloc(sizeof(int) * (med));
	if (range == NULL)
		return (NULL);
	med = 0;
	while (max > min)
	{
		range[med] = min;
		min++;
		med++;
	}
	return (range);
}
//
//int main(void)
//{
//	int	min;
//	int	max;
//	int	*range;
//	int	i = 0;
//	int	size;
//
//	min = 0;
//	max = 20;
//	size = max - min;
//	range = ft_range(min, max);
//	while(i < size)
//	{
//		printf("%d ", range[i]);
//		i++;
//	}
//    printf("\n");
//    return (0);
//}
