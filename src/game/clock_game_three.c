/*
** EPITECH PROJECT, 2020
** clock_game_three
** File description:
** clock_game_three
*/

#include "my_runner.h"

void clock_asset_eightwo(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[17].evclock.clock)) > 1) {
            if (game[17].varint.i > -1920) {
                game[17].varint.i -= 6;
            }
            if (game[17].varint.i <= -1920)
                game[17].varint.i = 1920;
            game[17].vecto.twof.x = game[17].varint.i;
            sfSprite_setPosition(game[17].rectsprite.sprite,
                game[17].vecto.twof);
            sfClock_restart(game[17].evclock.clock);
        }
}

void clock_asset_eight(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[16].evclock.clock)) > 1) {
            if (game[16].varint.i > -1920) {
                game[16].varint.i -= 6;
            }
            if (game[16].varint.i <= -1920)
                game[16].varint.i = 1920;
            game[16].vecto.twof.x = game[16].varint.i;
            sfSprite_setPosition(game[16].rectsprite.sprite,
                game[16].vecto.twof);
            sfClock_restart(game[16].evclock.clock);
        }
}

void clock_asset_seventwo(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[15].evclock.clock)) > 1) {
            if (game[15].varint.i > -1920) {
                game[15].varint.i -= 6;
            }
            if (game[15].varint.i <= -1920)
                game[15].varint.i = 1920;
            game[15].vecto.twof.x = game[15].varint.i;
            game[15].vecto.twof.y = 0;
            sfSprite_setPosition(game[15].rectsprite.sprite,
                game[15].vecto.twof);
            sfClock_restart(game[15].evclock.clock);
        }
}

void clock_asset_seven(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[14].evclock.clock)) > 1) {
            if (game[14].varint.i > -1920) {
                game[14].varint.i -= 6;
            }
            if (game[14].varint.i <= -1920)
                game[14].varint.i = 1920;
            game[14].vecto.twof.x = game[14].varint.i;
            game[14].vecto.twof.y = 0;
            sfSprite_setPosition(game[14].rectsprite.sprite,
                game[14].vecto.twof);
            sfClock_restart(game[14].evclock.clock);
        }
}