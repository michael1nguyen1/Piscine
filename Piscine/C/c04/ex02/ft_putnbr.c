/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:38:30 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/09 17:38:34 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	b;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	b = nb % 10 + '0';
	write(1, &b, 1);
}

/*int	main(void)
{
	int nb;
nb = 2147483647;
//nb = -2147483647;
//nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}*/