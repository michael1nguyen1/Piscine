/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:38:30 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/07 11:38:32 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>
//strcat combines two strings*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (dest [i] != '\0')
	{
		dest [i] = dest [i];
		i++;
	}
	while (src [s] != '\0')
	{
		dest[i] = src [s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main ()
{
	char dest []= "I ";
	char source []= "win!";
	printf("%s", ft_strcat(dest, source));
	return (0);
}*/