/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:21:45 by linhnguy          #+#    #+#             */
/*   Updated: 2023/07/17 11:21:49 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		totallen;
	char	*arr;

	totallen = 1;
	i = 0;
	if (size == 0)
		return ("");
	while (i < size)
		totallen += ft_strlen(strs[i++]);
	if (size >= 2)
		totallen += ft_strlen(sep) * (size - 1) + 1;
	arr = (char *) malloc (totallen);
	if (arr == 0)
		return (0);
	arr[0] = '\0';
	i = 0;
	while (i < size)
	{
		arr = ft_strcpy(arr, strs[i]);
		if (i < size - 1)
		arr = ft_strcpy(arr, sep);
		i++;
	}
	return (arr);
}

/*int main ()
{
char *strs [4] = {"Will", "code", "for", "food"};
char sep[] = " ";
int size = 4;

printf("%s", ft_strjoin(size, strs, sep));
return (0);
}*/