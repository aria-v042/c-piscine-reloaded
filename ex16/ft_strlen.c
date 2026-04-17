/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 06:51:51 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 06:54:49 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/*
#include <unistd.h>

int	main(void)
{
	int		len;
	char	len_out;

	len = 0;
		write(1, ">> \"piscine\" has ", 17);
	len = ft_strlen("piscine");
	len_out = '0' + len;
	write(1, &len_out, 1);
	write(1, " characters ><>\n", 16);
	return (0);
}
*/
