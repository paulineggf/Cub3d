/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_height.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 17:37:35 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/19 15:40:43 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	sprite_height(t_map *map)
{
	map->sprite[map->i]->height = abs((int)((double)map->res_y /
	map->sprite[map->i]->transformy));
}
