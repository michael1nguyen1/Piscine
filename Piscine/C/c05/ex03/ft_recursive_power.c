/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:10:51 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/13 20:11:05 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power -1));
	return (-1);
}

/*int main ()
{
	int	nb;
	int power;
	nb = 5;
	power = 5;

	printf("%d", ft_recursive_power(nb, power));
}*/