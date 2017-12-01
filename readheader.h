/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readheader.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:55:27 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/01 21:31:21 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READHEADER_H
# define READHEADER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
#include <stdio.h>

void	make_mem(char ***massive, int n);

#endif