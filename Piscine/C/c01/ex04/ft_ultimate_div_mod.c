/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:19:00 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/04 18:32:50 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *a / *b;
	*b = t % *b;
}

/*int main ()
{

int a = 9;
int b = 4;

ft_ultimate_div_mod(&a, &b);
printf ("%d,%d", a, b);
return (0);
}*/
