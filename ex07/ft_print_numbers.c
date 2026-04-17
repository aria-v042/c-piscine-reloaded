/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 04:41:45 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 05:53:06 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	numchar;

	numchar = '0';
	while (numchar <= '9')
	{
		ft_putchar(numchar);
		numchar++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
