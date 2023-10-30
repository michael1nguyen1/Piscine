/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:13:43 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/16 13:13:47 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>
//#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*values;

	i = 0;
	if (min >= max)
		return (NULL);
	values = (int *)malloc((max - min) * sizeof(int));
	if (values == 0)
		return (NULL);
	while (min < max)
	{
		values [i] = min;
		i++;
		min ++;
	}
	return (values);
}

/*int main()
{
	int	min = 1;
	int	max = 10;
	int i = 0;	
	int	*ptr;

	ptr = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d ", ptr[i]);
		i ++;
	}
	free(ptr);
}*/