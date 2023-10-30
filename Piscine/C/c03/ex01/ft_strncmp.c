/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:29:37 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/06 22:29:40 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	//n = n - 1;
	while ((s1[i] == s2[i])
		&& (s1[i] != '\0' || s2[i] != '\0')
		&& i < n)
		++i;
	return (s1[i] - s2[i]);
}

int main()
{

char s1[] = "aaz9";
char s2[] = "aat9";
unsigned int n = 3;

printf("%d", ft_strncmp(s1, s2, n));
}