/*
** EPITECH PROJECT, 2020
** clock_game
** File description:
** clock_game
*/

#include "my_runner.h"

void clock_assetfour_two(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[9].evclock.clock)) > 1) {
            if (game[9].varint.i > -1920) {
                game[9].varint.i -= 1;
            }
            if (game[9].varint.i == -1920)
                game[9].varint.i = 1920;
            game[9].vecto.twof.x = game[9].varint.i;
            game[9].vecto.twof.y = 0;
            sfSprite_setPosition(game[9].rectsprite.sprite, game[9].vecto.twof);
            sfClock_restart(game[9].evclock.clock);
        }
}

void clock_assetfour(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[8].evclock.clock)) > 1) {
            if (game[8].varint.i > -1920) {
                game[8].varint.i -= 1;
            }
            if (game[8].varint.i == -1920)
                game[8].varint.i = 1920;
            game[8].vecto.twof.x = game[8].varint.i;
            game[8].vecto.twof.y = 0;
            sfSprite_setPosition(game[8].rectsprite.sprite, game[8].vecto.twof);
            sfClock_restart(game[8].evclock.clock);
        }
}

void clock_bat_two(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[7].evclock.clock)) > 1) {
            if (game[7].varint.ii > -1920) {
                game[7].varint.ii -= 0.5;
            }
            if (game[7].varint.ii == -1920)
                game[7].varint.ii = 1920;
            game[7].vecto.twof.x = game[7].varint.ii;
            game[7].vecto.twof.y = 0;
            sfSprite_setPosition(game[7].rectsprite.sprite, game[7].vecto.twof);
            sfClock_restart(game[7].evclock.clock);
        }
}

void clock_bat(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[6].evclock.clock)) > 1) {
            if (game[6].varint.ii > -1920) {
                game[6].varint.ii -= 0.5;
            }
            if (game[6].varint.ii == -1920)
                game[6].varint.ii = 1920;
            game[6].vecto.twof.x = game[6].varint.ii;
            game[6].vecto.twof.y = 0;
            sfSprite_setPosition(game[6].rectsprite.sprite, game[6].vecto.twof);
            sfClock_restart(game[6].evclock.clock);
        }
}