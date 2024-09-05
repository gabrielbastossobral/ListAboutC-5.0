/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:41:44 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/04 17:17:51 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(const char *str)
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
	int	j;

	j = 1;
	i = 0;
	if (argc < 2)
	{
		return (-1);
	}
	while (i < argc - 1)
	{
		ft_print_params(argv[j]);
		i++;
		j++;
	}
	return (0);
}
