/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:55:33 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/13 20:55:45 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (-2);
}
/*int main ()
{
int	index;
index = 5;
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,144,233,377,610,987, 1597, 2584
printf("%d",ft_fibonacci(index));
}*/