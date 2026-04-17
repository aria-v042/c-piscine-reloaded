/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 06:01:17 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 06:04:08 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <unistd.h>

int	main(void)
{
	int		a;
	int		b;
	char	a_out;
	char	b_out;

	a = 7;
	b = 6;
	ft_swap(&a, &b);
	a_out = '0' + a;
	b_out = '0' + b;
	write(1, "a: ", 3);
	write(1, &a_out, 1);
	write(1, "\n", 1);
	write(1, "b: ", 3);
	write(1, &b_out, 1);
	write(1, "\n", 1);
	return (0);
}
*/
