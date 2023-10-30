/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:43:08 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/18 17:43:11 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct blah
{
	int	x;
	int	y;

}	t_point;

#endif

/*#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}

int main(void)
{
t_point point;
set_point(&point);
printf("%d, %d", point.x, point.y);
return (0);
}*/