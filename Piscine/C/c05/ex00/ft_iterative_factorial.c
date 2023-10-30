/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:55:47 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/13 11:55:51 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	fac;

	index = 1;
	fac = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (index < nb)
	{
		fac = fac * (index + 1);
		index++;
	}
	return (fac);
}

int main(void)
{	
	int nb;
	nb = 5;
	printf ("%d",ft_iterative_factorial(nb));
}