/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:20:14 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/07 18:20:18 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
//strcat combines two strings with a number*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (dest [i] != '\0')
		i++;
	while ((src [s] != '\0') && (s < nb))
	{
		dest[i] = src [s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main ()
{
	char dest []= "I ";
	char source []= "win!";
	unsigned int nb;
	nb = 6;
	printf("%s", ft_strncat(dest, source, nb));
	return (0);
}*/