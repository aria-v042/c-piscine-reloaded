/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 05:27:27 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 05:30:04 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n < 0)
	{
		ft_putchar(neg);
	}
	else
	{
		ft_putchar(pos);
	}
}

/*
int	main(void)
{
	ft_is_negative(-8);
	return (0);
}
*/
