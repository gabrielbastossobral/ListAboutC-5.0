/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:10:52 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/04 16:57:34 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sort_params(char *str)
{
	int	total;

	total = 0;
	while (*str)
	{
		total += (int)*str;
		str++;
	}
	return (total);
}

void	ft_sort(int count, char *tab[])
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < count - 1)
	{
		j = 0;
		while (j < count - i - 1)
		{
			if (ft_sort_params(tab[j]) > ft_sort_params(tab[j + 1]))
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	length;

	i = 1;
	if (argc < 2)
	{
		return (-1);
	}
	ft_sort(argc - 1, argv + 1);
	while (i < argc)
	{
		length = 0;
		while (argv[i][length])
			length++;
		write(1, argv[i], length);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
