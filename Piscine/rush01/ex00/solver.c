/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuojua <rnuojua@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:01:19 by rnuojua           #+#    #+#             */
/*   Updated: 2023/07/09 22:41:09 by rnuojua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		check_vision_col(int *psq, int size, int index, int *pvs);
int		check_vision_col_rev(int *psq, int size, int index, int *pvs);
int		check_vision_row(int *psq, int size, int index, int *pvs);
int		check_vision_row_rev(int *psq, int size, int index, int *pvs);

void	put_num(char c)
{
	c = c + '0';
	write(1, &c, 1);
}

void	print_sq(int *psq, int size)
{
	int	i;

	i = 0;
	while (i < size * size)
	{
		put_num((char) psq[i] + 1);
		if ((i + 1) % size == 0)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i++;
	}
}

int	check_move(int *psq, int size, int index, int *pvs)
{
	int	i;
	int	cmp_index;

	i = 0;
	while (i < size)
	{
		cmp_index = i + (size * (index / size));
		if (index != cmp_index
			&& psq[cmp_index] != -1
			&& psq[index] == psq[cmp_index])
			return (0);

		cmp_index = (i * size) + (index % size);
		if (index != cmp_index
			&& psq[cmp_index] != -1
			&& psq[index] == psq[cmp_index])
			return (0);
		i++;
	}
	return (check_vision_row(psq, size, index, pvs)
		&& check_vision_row_rev(psq, size, index, pvs)
		&& check_vision_col(psq, size, index, pvs)
		&& check_vision_col_rev(psq, size, index, pvs));
}

int	solve(int *psq, int size, int *pvs)
{
	int	i;

	i = 0;
	psq[i] = 0;
	while (i < size * size)
	{
		if (psq[i] == size)
		{
			if (i == 0)
				return (1);
			psq[i] = -1;
			i--;
			psq[i]++;
			continue ;
		}
		if (check_move(psq, size, i, pvs)) 
		{
			i++;
			psq[i] = 0;
			continue ;
		}
		psq[i]++;
	}
	print_sq(psq, size);
	return (0);
}
