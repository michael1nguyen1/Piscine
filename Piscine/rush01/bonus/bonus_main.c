/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuojua <rnuojua@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:53:36 by rnuojua           #+#    #+#             */
/*   Updated: 2023/07/09 23:02:24 by rnuojua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	solve(int *psq, int size, int *pvs);

void	set_mem(int *p, int size, int n)
{
	int	i;

	i = 0;
	while (i < size * size)
		p[i++] = n;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	*parse_args(int size, char *s)
{
	int	*p;
	int	i;

	p = malloc(size * 4 * sizeof(int));
	i = 0;
	while (1)
	{
		if (*s < '1' || *s > ('0' + size))
		{
			return (0);
		}
		p[i] = *s - '0';
		i++;
		s++;
		if (i == size * 4 && !*s)
			break ;
		if (*s != ' ' || !*s)
		{
			return (0);
		}
		s++;
	}
	return (p);
}

int	parse_size(char *s, int *psize)
{
	if (*s != '-')
		return (0);
	s++;
	if (*s < '1' || *s > '9')
		return (0);
	*psize = *s - '0';
	return (1);
}

int	main(int argc, char **argv)
{
	int	size;
	int	*psq;
	int	*pvs;
	int	error;

	pvs = 0;
	error = 0;
	size = 4;
	if (argc == 2)
		pvs = parse_args(size, argv[1]);
	else if (argc == 3)
	{
		if (!parse_size(argv[1], &size))
			error = 1;
		else
			pvs = parse_args(size, argv[2]);
	}
	if (!error && pvs)
	{
		psq = malloc(size * size * sizeof(int));
		set_mem(psq, size, -1);
		error = solve(psq, size, pvs);
	}
	if (error || !pvs)
		ft_putstr("Error\n");
}
