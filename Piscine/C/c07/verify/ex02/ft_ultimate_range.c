/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:11:10 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/16 17:11:13 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>
//#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (-1);
	while ((i + min) < max)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (max - min);
}

/*int main()
{
	int	min = 1;
	int	max = 10;
	int i = 0;
	int size;
	int	*ptr;

	size = ft_ultimate_range(&ptr, min, max);
	while (i < size)
	{
		printf("%d ", ptr[i]);
		i ++;
	}
}*/