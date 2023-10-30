/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:14:22 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/15 17:14:27 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *src)
{
	int	length;

	length = 0;
	while (src [length])
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	while (src[i])
	{	
		dest [i] = src [i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

/*int main()
{
char src[] = "Did I get it?";
printf("%s", ft_strdup(src));
}*/