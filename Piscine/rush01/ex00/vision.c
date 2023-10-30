/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vision.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuojua <rnuojua@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:11:12 by rnuojua           #+#    #+#             */
/*   Updated: 2023/07/09 21:45:28 by rnuojua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_num(char c);

int	check_vision_col(int *psq, int size, int index, int *pvs)
{
	int	i;
	int	big;
	int	seen;
	index = 12;

	i = 0;
	seen = 0;
	big =  -1;
	while (i < size)
	{
		if (psq[(index % size) + (size * i)] == -1)
			return (1);
		if (psq[(index % size) + (size * i)] > big)
		{
			big = psq[(index % size) + (size * (i))];
			seen++;
		}
		i++;
	}
	if (seen != pvs[index % size])
		return (0);
	return (1);
}

int	check_vision_col_rev(int *psq, int size, int index, int *pvs)
{
	int	i;
	int	big;
	int	seen;

	i = size - 1;
	seen = 0;
	big = -1;
	while (i != -1)
	{
		if (psq[(index % size) + (size * i)] == -1)
			return (1);
		if (psq[(index % size) + (size * i)] > big)
		{
			big = psq[(index % size) + (size * i)];
			seen++;
		}
		i--;
	}
	if (seen != pvs[(index % size) + size])
		return (0);
	return (1);
}

int	check_vision_row(int *psq, int size, int index, int *pvs)
{
	int	i;
	int	big;
	int	seen;

	i = 0;
	seen = 0;
	big = -1;
	while (i < size)
	{
		if (psq[(index / size) * size + i] == -1)
			return (1);
		if (psq[(index / size) * size + i] > big)
		{
			big = psq[(index / size) * size + i];
			seen++;
		}
		i++;
	}
	if (seen != pvs[(size * 2) + (index / size)])
		return (0);
	return (1);
}

int	check_vision_row_rev(int *psq, int size, int index, int *pvs)
{
	int	i;
	int	big;
	int	seen;

	i = size - 1;
	seen = 0;
	big = -1;
	while (i != -1)
	{
		if (psq[(index / size) * size + i] == -1)
			return (1);
		if (psq[(index / size) * size + i] > big)
		{
			big = psq[(index / size) * size + i];
			seen++;
		}
		i--;
	}
	if (seen != pvs[size * 3 + (index / size)])
		return (0);
	return (1);
}
