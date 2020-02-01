/*
** EPITECH PROJECT, 2020
** clock_game_six
** File description:
** clock_game_six
*/

#include "my_runner.h"

void clock_animate_monster(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[23].evclock.clocktwo)) > 80) {
            if (game[23].varint.left <= 552) {
                game[23].varint.left += 92;
            }
            if (game[23].varint.left >= 552)
                game[23].varint.left = 0;
            game[23].rectsprite.rect.left = game[23].varint.left;
            sfClock_restart(game[23].evclock.clocktwo);
        }
}

void clock_monster(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[23].evclock.clock)) > 5) {
            if (game[23].vecto.twof.x >= -100) {
                game[23].vecto.twof.x -= (22 + game[23].varint.ii);
            }
            if (game[23].vecto.twof.x <= -100) {
                game[23].vecto.twof.x = 1850;
                game[23].varint.ii += 0.5;
            }
            sfSprite_setPosition(game[23].rectsprite.sprite,
                game[23].vecto.twof);
            sfClock_restart(game[23].evclock.clock);
        }
}

void clock_asset_fantomtwo(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[22].evclock.clock)) > 1) {
            if (game[22].varint.i > -1920) {
                game[22].varint.i -= 6;
            }
            if (game[22].varint.i <= -1920)
                game[22].varint.i = 1920;
            game[22].vecto.twof.x = game[22].varint.i;
            sfSprite_setPosition(game[22].rectsprite.sprite,
                game[22].vecto.twof);
            sfClock_restart(game[22].evclock.clock);
        }
}

void clock_asset_fantom(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[21].evclock.clock)) > 1) {
            if (game[21].varint.i > -1920) {
                game[21].varint.i -= 6;
            }
            if (game[21].varint.i <= -1920)
                game[21].varint.i = 1920;
            game[21].vecto.twof.x = game[21].varint.i;
            sfSprite_setPosition(game[21].rectsprite.sprite,
                game[21].vecto.twof);
            sfClock_restart(game[21].evclock.clock);
        }
}