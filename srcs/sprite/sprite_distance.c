/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_distance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:34:44 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/18 14:03:48 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void		sprite_distance(t_map *map)
{
	map->sprite[map->i]->distance = (map->gamer.posx -
	(map->sprite[map->i]->mapx + 0.5)) * (map->gamer.posx
	- (map->sprite[map->i]->mapx + 0.5)) + (map->gamer.posy -
	(map->sprite[map->i]->mapy + 0.5)) * (map->gamer.posy -
	(map->sprite[map->i]->mapy + 0.5));

	// printf("map->sprite[%d]->distance : %f\n",
	// map->i, map->sprite[map->i]->distance);
}
