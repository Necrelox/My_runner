/*
** EPITECH PROJECT, 2020
** event_game_one
** File description:
** event_game_one
*/

#include "my_runner.h"

void player_collision_monster(index_s *game)
{
    game[20].vecto.twoff = sfSprite_getPosition(game[20].rectsprite.sprite);
    game[23].vecto.twoff = sfSprite_getPosition(game[23].rectsprite.sprite);
    if ((game[20].vecto.twoff.x + 60) >= (game[23].vecto.twoff.x) &&
        (game[20].vecto.twoff.x + 60) <= (game[23].vecto.twoff.x + 125))
        if ((game[20].vecto.twoff.y + 75) >= (game[23].vecto.twoff.y)
            && (game[20].vecto.twoff.y + 75)
                <= game[23].vecto.twoff.y + 125)
                game[0].varint.breakint = 3;
}

void player_movement(index_s *game)
{
    if (game[0].evclock.event.key.code == sfKeyQ
        && game[0].varint.pause == 0) {
        if (game[20].vecto.twof.x >= 39)
            game[20].vecto.twof.x -= 16;
    
    }
    if (game[0].evclock.event.key.code == sfKeyD
        && game[0].varint.pause == 0) {
        if (game[20].vecto.twof.x <= 1771)
            game[20].vecto.twof.x += 16;
    }
    if (game[0].evclock.event.key.code == sfKeyLeft
        && game[0].varint.pause == 0) {
        if (game[20].vecto.twof.x >= 39)
            game[20].vecto.twof.x -= 16;
    }
    if (game[0].evclock.event.key.code == sfKeyRight
        && game[0].varint.pause == 0) {
        if (game[20].vecto.twof.x <= 1771)
            game[20].vecto.twof.x += 16;
    }
}

void player_jump_down(index_s *game)
{
    game[20].rectsprite.rect.left = 126;
    game[20].rectsprite.rect.top = 240;
    clock_jump_down(game);
}

void player_jump_up(index_s *game)
{
    game[20].rectsprite.rect.left = 0;
    game[20].rectsprite.rect.top = 240;
    clock_jump_up(game);
}

void event_game_one(index_s *game)
{
    game[20].varint.key = 1;
}