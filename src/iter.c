/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 17:48:48 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/09 17:59:46 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	iter(char **field, char **tetra)
{
	int i;
	int j;

	i = 0;
	j = 0;
	field[i][j] = tetra[i][j];
	while (i < 3 && (j = 0))
	{
		while (j < 3)
		{
			j++;
		}
		i++;
	}
	return (0);
}
