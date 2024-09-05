/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:09:01 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/04 13:05:28 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(const char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, const char *argv[])
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		return (-1);
	}
	while (i < argc)
	{
		i++;
	}
	i--;
	while (i > 0)
	{
		ft_rev_params(argv[i]);
		i--;
	}
	return (0);
}
