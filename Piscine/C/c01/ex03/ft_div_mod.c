/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:23:33 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/04 18:22:12 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
*div = a / b;
*mod = a % b;
}

/*int main()
{   
    int qu; 
    int rem;
    int *an;
    int *re;
        
    an = &qu;
    re = &rem; 

    ft_div_mod(9, 4, an, re);
    printf("%d", qu);
    printf("%d", rem);
    return(0);
}*/
