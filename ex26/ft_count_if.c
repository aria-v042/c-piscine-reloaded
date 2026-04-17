/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 10:06:13 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 10:08:06 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **array, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (array[i])
	{
		if ((*f)(array[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
