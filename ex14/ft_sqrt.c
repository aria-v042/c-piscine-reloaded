/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 06:16:02 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 06:16:14 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 0;
	while (root * root < nb)
		root++;
	if (root * root == nb)
		return (root);
	return (0);
}
/* TESTING GROUNDS:

// ft_atoi copy:
int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	char	*i;
	int		sign;
	int		ifroma;

	i = str;
	while (ft_isspace(*i))
		i++;
	sign = 1;
	while (*i == '+' || *i == '-')
	{
		if (*i == '-')
			sign *= -1;
		i++;
	}
	ifroma = 0;
	while (*i >= '0' && *i <= '9')
	{
		ifroma *= 10;
		ifroma += *i - '0';
		i++;
	}
	return (ifroma * sign);
}

// MAIN:
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	res;

	// input verification
	if (argc != 2)
	{
		printf("\nPISCINECORE SAYS:\n"
			"\nError!\n"
			"\nUsage: ./<out> <num>\n\n");
		return (1);
	}
	res = ft_sqrt(ft_atoi(argv[1]));
	if (res == 0)
	{
		printf("\nPISCINECORE SAYS:\n"
			"\n/><>/: %s isn't a perfect square\n\n", argv[1]);
	}
	else
	{
		printf("\nPISCINECORE SAYS:\n"
			"\n/><>/: the root of %s is...\n"
			"\n/><>/: %d\n\n", argv[1], res);
	}
	return (0);
}
*/
