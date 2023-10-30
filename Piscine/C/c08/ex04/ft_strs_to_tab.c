/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:25:53 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/18 18:25:55 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;

	i = 0;
	arr = malloc((ac +1) * sizeof(t_stock_str));
	if (arr == NULL)
		return (0);
	while (i < ac)
	{
	arr[i].copy = ft_strdup(av[i]);
	arr[i].str = av[i];
	arr[i].size = ft_strlen(av[i]);
	i++;
	}
	arr[i].str = 0;
	return (arr);
}

/*int	main(void)
{
	t_stock_str	*result;
	int	i = 0;
	char *av[5]= {"I", "really", "want", "food", "now"};
	int size = 5;
	result = ft_strs_to_tab(size, av);
	while (i <= size)
	{
	printf("%d\n", result[i].size);
	printf("%s\n", result[i].str);
	printf("%s\n", result[i].copy);
	i++;
	}
}
#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
int size;
char *
} t_stock_str;
char *copy;str;

#endif*/