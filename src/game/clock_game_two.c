/*
** EPITECH PROJECT, 2020
** clock_game_two
** File description:
** clock_game_two
*/

#include "my_runner.h"

void clock_asset_sixtwo(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[12].evclock.clock)) > 1) {
            if (game[12].varint.i > -1920) {
                game[12].varint.i -= 6;
            }
            if (game[12].varint.i <= -1920)
                game[12].varint.i = 1920;
            game[12].vecto.twof.x = game[12].varint.i;
            game[12].vecto.twof.y = 0;
            sfSprite_setPosition(game[12].rectsprite.sprite,
                game[12].vecto.twof);
            sfClock_restart(game[12].evclock.clock);
        }
}

void clock_asset_six(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[13].evclock.clock)) > 1) {
            if (game[13].varint.i > -1920) {
                game[13].varint.i -= 6;
            }
            if (game[13].varint.i <= -1920)
                game[13].varint.i = 1920;
            game[13].vecto.twof.x = game[13].varint.i;
            game[13].vecto.twof.y = 0;
            sfSprite_setPosition(game[13].rectsprite.sprite,
                game[13].vecto.twof);
            sfClock_restart(game[13].evclock.clock);
        }
}

void clock_asset_fivetwo(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[10].evclock.clock)) > 1) {
            if (game[10].varint.i > -1920) {
                game[10].varint.i -= 6;
            }
            if (game[10].varint.i <= -1920)
                game[10].varint.i = 1920;
            game[10].vecto.twof.x = game[10].varint.i;
            game[10].vecto.twof.y = 0;
            sfSprite_setPosition(game[10].rectsprite.sprite,
                game[10].vecto.twof);
            sfClock_restart(game[10].evclock.clock);
        }
}

void clock_asset_five(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[11].evclock.clock)) > 1) {
            if (game[11].varint.i > -1920) {
                game[11].varint.i -= 6;
            }
            if (game[11].varint.i <= -1920)
                game[11].varint.i = 1920;
            game[11].vecto.twof.x = game[11].varint.i;
            game[11].vecto.twof.y = 0;
            sfSprite_setPosition(game[11].rectsprite.sprite,
                game[11].vecto.twof);
            sfClock_restart(game[11].evclock.clock);
        }
}