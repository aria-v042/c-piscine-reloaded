/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 07:43:01 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 07:46:43 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	comp;

	if (argc != 3)
	{
		printf("Error!\n"
			"Usage: %s <str1> <str2>\n", argv[0]);
		return (-1);
	}
	comp = ft_strcmp(argv[1], argv[2]);
	if (comp < 0)
	{
		printf("\"%s\" is less than \"%s\" (%d)\n", argv[1], argv[2], comp);
	}
	else if (comp > 0)
	{
		printf("\"%s\" is greater than \"%s\" (%d)\n", argv[1], argv[2], comp);
	}
	else
	{
		printf("\"%s\" and \"%s\" are equal\n", argv[1], argv[2]);
	}
	return (0);
}
*/
