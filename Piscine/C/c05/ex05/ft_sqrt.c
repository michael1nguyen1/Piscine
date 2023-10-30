/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:51:53 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/13 21:51:56 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	product;

	i = 1 ;
	product = 0;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (product < nb)
	{
		i++;
		product = i * i;
	}
	if (product > nb)
		return (0);
	if (product == nb)
		return (i);
	return (-1);
}

/*int main()
{
int nb;
nb = 2147395600;
printf("%d",ft_sqrt(nb));
}*/