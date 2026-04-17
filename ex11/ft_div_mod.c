/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 06:06:07 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 06:06:41 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <unistd.h>

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;
	char	a_out0;
	char	a_out1;
	char	b_out0;
	char	b_out1;
	char	div_out;
	char	mod_out;

	a = 67;
	b = 10;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	a_out0 = '0' + a / 10;
	a_out1 = '0' + a % 10;
	b_out0 = '0' + b / 10;
	b_out1 = '0' + b % 10;
	div_out = '0' + div;
	mod_out = '0' + mod;
	write(1, "the result of ", 14);
	write(1, &a_out0, 1);
	write(1, &a_out1, 1);
	write(1, "/", 1);
	write(1, &b_out0, 1);
	write(1, &b_out1, 1);
	write(1, " is...\n\n", 8);
	write(1, &div_out, 1);
	write(1, " with a remainder of ", 21);
	write(1, &mod_out, 1);
	write(1, "\n", 1);
	return (0);
}
*/
