/*
** EPITECH PROJECT, 2020
** clock_game_seven
** File description:
** clock_game_seven
*/

#include "my_runner.h"

void clock_fantomtwo_down(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[22].evclock.clocktwo)) > 1) {
            if (game[22].vecto.twof.y < 0) {
                game[22].vecto.twof.y += 0.25;
            }
            if (game[22].vecto.twof.y == 0)
                game[22].varint.key = 1;
            sfSprite_setPosition(game[22].rectsprite.sprite,
                game[22].vecto.twof);
            sfClock_restart(game[22].evclock.clocktwo);
        }
}

void clock_fantomtwo_up(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[22].evclock.clocktwo)) > 1) {
            if (game[22].vecto.twof.y > -25) {
                game[22].vecto.twof.y -= 0.25;
            }
            if (game[22].vecto.twof.y == -10)
                game[22].varint.key = 2;
            sfSprite_setPosition(game[22].rectsprite.sprite,
                game[22].vecto.twof);
            sfClock_restart(game[22].evclock.clocktwo);
        }
}

void clock_fantom_down(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[21].evclock.clocktwo)) > 5) {
            if (game[21].vecto.twof.y < 0) {
                game[21].vecto.twof.y += 0.25;
            }
            if (game[21].vecto.twof.y == 0)
                game[21].varint.key = 1;
            sfSprite_setPosition(game[21].rectsprite.sprite,
                game[21].vecto.twof);
            sfClock_restart(game[21].evclock.clocktwo);
        }
}

void clock_fantom_up(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[21].evclock.clocktwo)) > 5) {
            if (game[21].vecto.twof.y > -10) {
                game[21].vecto.twof.y -= 0.25;
            }
            if (game[21].vecto.twof.y == -10)
                game[21].varint.key = 2;
            sfSprite_setPosition(game[21].rectsprite.sprite,
                game[21].vecto.twof);
            sfClock_restart(game[21].evclock.clocktwo);
        }
}