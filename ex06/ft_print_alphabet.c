/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 03:31:39 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 05:22:41 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		ft_putchar(alpha);
		alpha++;
	}
}

// /*
#include <stdio.h>

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
// */
