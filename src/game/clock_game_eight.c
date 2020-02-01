/*
** EPITECH PROJECT, 2020
** clock_game_eight
** File description:
** clock_game_eight
*/

#include "my_runner.h"

void clock_monster2(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[29].evclock.clock)) > 1) {
            if (game[29].vecto.twof.x >= -100) {
                game[29].vecto.twof.x -= 38;
            }
            game[29].varint.j += 10;
            if (game[29].varint.j >= 360)
                game[29].varint.j = 0;
            if (game[29].vecto.twof.x <= -100)
                game[29].vecto.twof.x = 1850;
            sfSprite_setRotation(game[29].rectsprite.sprite,
                game[29].varint.j);
            sfSprite_setPosition(game[29].rectsprite.sprite,
                game[29].vecto.twof);
            sfClock_restart(game[29].evclock.clock);
        }
}

void clock_score(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[26].evclock.clock)) > 1000) {
            game[26].varint.j++;
            set_score_convert(game);
            sfText_setString(game[26].texfont.text, game[26].varchar.str);
            sfClock_restart(game[26].evclock.clock);
        }
}