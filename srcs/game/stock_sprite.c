/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_sprite.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 19:33:22 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/12 19:46:59 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	stock_sprite(t_map *map)
{
	map->sprite[map->sprite->i]->mapx = map->gamer->mapx + 0.5;
	map->sprite[map->sprite->i]->mapy = map->gamer->mapy + 0.5;
	map->sprite[map->sprite->i]->distance = distance_sprite(map);
	map->sprite->i++;
}
