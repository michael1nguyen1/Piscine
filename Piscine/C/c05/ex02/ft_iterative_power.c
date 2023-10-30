/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:03:16 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/13 19:03:37 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	answer;

	i = 1;
	answer = 1;
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		answer = answer * nb;
		i++;
	}
	return (answer);
}

/*int main ()
{
	int	nb;
	int power;
	nb = 3;
	power = 3;

	printf("%d", ft_iterative_power(nb, power));
}*/