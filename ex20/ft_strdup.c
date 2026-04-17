/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 08:09:12 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/17 08:21:19 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = 0;
	while (*(src + size) != '\0')
		size++;
	dest = malloc(size + 1);
	if (dest == NULL)
		return (NULL);
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
//
//int main(void)
//{
//	char src[] = "i am become joker, the HAHAHhAhahaHAhAhAHAHahah";
//	char *dest;
//
//	dest = ft_strdup(src);
//	printf("%s\n", dest);
//}
