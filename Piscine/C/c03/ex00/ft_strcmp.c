/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:24:48 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/06 18:24:53 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i])
		&& (s1[i] != '\0' || s2[i] != '\0'))
		++i;
	return (s1[i] - s2[i]);
}

/*int main()
{

char s1[] = "cat";
char s2[] = "bat";

printf("%d", strcmp(s1,s2));

}*/