/*
** EPITECH PROJECT, 2020
** event_game_two
** File description:
** event_game_two
*/

#include "my_runner.h"

void player_collision_monster2(index_s *game)
{
    game[20].vecto.twoff = sfSprite_getPosition(game[20].rectsprite.sprite);
    game[29].vecto.twoff = sfSprite_getPosition(game[29].rectsprite.sprite);
    if ((game[20].vecto.twoff.x + 60) >= (game[29].vecto.twoff.x) &&
        (game[20].vecto.twoff.x + 60) <= (game[29].vecto.twoff.x + 125))
        if ((game[20].vecto.twoff.y + 75) >= (game[29].vecto.twoff.y)
            && (game[20].vecto.twoff.y + 75)
                <= game[29].vecto.twoff.y + 125)
                game[0].varint.breakint = 3;
}