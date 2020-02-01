/*
** EPITECH PROJECT, 2020
** clock_game_four
** File description:
** clock_game_four
*/

#include "my_runner.h"

void clock_eight_down(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[16].evclock.clocktwo)) > 20) {
            if (game[16].varint.j < -40) {
                game[16].varint.j++;
            }
            if (game[16].varint.j == -40)
                game[16].varint.key = 1;
            game[16].vecto.twof.y = game[16].varint.j;
            sfSprite_setPosition(game[16].rectsprite.sprite,
                game[16].vecto.twof);
            sfClock_restart(game[16].evclock.clocktwo);
        }
}

void clock_eight_up(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[16].evclock.clocktwo)) > 20) {
            if (game[16].varint.j > -55)
                game[16].varint.j--;
            if (game[16].varint.j == -55)
                game[16].varint.key = 2;
            game[16].vecto.twof.y = game[16].varint.j;
            sfSprite_setPosition(game[16].rectsprite.sprite,
                game[16].vecto.twof);
            sfClock_restart(game[16].evclock.clocktwo);
        }
}

void clock_asset_ninetwo(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[19].evclock.clock)) > 1) {
            if (game[19].varint.i > -1920) {
                game[19].varint.i -= 6;
            }
            if (game[19].varint.i <= -1920)
                game[19].varint.i = 1920;
            game[19].vecto.twof.x = game[19].varint.i;
            game[19].vecto.twof.y = -50;
            sfSprite_setPosition(game[19].rectsprite.sprite,
                game[19].vecto.twof);
            sfClock_restart(game[19].evclock.clock);
        }
}

void clock_asset_nine(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[18].evclock.clock)) > 1) {
            if (game[18].varint.i > -1920) {
                game[18].varint.i -= 6;
            }
            if (game[18].varint.i <= -1920)
                game[18].varint.i = 1920;
            game[18].vecto.twof.x = game[18].varint.i;
            game[18].vecto.twof.y = -50;
            sfSprite_setPosition(game[18].rectsprite.sprite,
                game[18].vecto.twof);
            sfClock_restart(game[18].evclock.clock);
        }
}