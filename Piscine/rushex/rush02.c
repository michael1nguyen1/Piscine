/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:14:35 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/01 18:58:18 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	column(int x, int y);

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(1, "Dude, we're not magicians! Input a positive number!", 60);
	}
	else
	{
		column(x, y);
	}
}

void	line(char m, char n, int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(m);
		}
		else
		{
			ft_putchar(n);
		}
		i++;
	}
}

void	column(int x, int y)
{
	int	r;

	r = 1;
	while (r <= y)
	{
		if (r == 1)
		{
			line('A', 'B', x);
		}
		else
		{
			if (r == y)
			{
				line('C', 'B', x);
			}
			else
			{
				line('B', ' ', x);
			}
		}
		ft_putchar('\n');
		r++;
	}
}
