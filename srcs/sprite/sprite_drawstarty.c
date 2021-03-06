/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_drawstarty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:04:17 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/19 15:40:41 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	sprite_drawstarty(t_map *map)
{
	map->sprite[map->i]->drawstarty = (-map->sprite[map->i]->height / 2)
	+ (map->res_y / 2);
	if (map->sprite[map->i]->drawstarty < 0)
		map->sprite[map->i]->drawstarty = 0;
}
