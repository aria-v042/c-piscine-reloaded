/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 06:13:09 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 06:13:23 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
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
	int	num;

	if (argc != 2)
		return (1);
	num = ft_atoi(argv[1]);
	printf("\nPISCINECORE SAYS:\n"
		"\n/><>/: the factorial of %d is...\n"
		"\n/><>/: %d\n\n", num, ft_recursive_factorial(num));
	return (0);
}
*/
