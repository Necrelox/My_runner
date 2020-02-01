/*
** EPITECH PROJECT, 2020
** clock_game_five
** File description:
** clock_game_five
*/

#include "my_runner.h"

void clock_jump_down(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[20].evclock.clocktwo)) > 1
        && game[20].varint.j < 790) {
            sfSprite_setPosition(game[20].rectsprite.sprite,
                game[20].vecto.twof);
            sfSprite_setTexture(game[20].rectsprite.sprite,
                game[20].wintex.texture, sfTrue);
            sfSprite_setTextureRect(game[20].rectsprite.sprite,
                game[20].rectsprite.rect);
            sfRenderWindow_drawSprite(game[0].wintex.window,
                game[20].rectsprite.sprite, NULL);
            game[20].varint.j += 40;
            game[20].vecto.twof.y = game[20].varint.j;
            sfClock_restart(game[20].evclock.clocktwo);
        }
    if (game[20].varint.j >= 790)
        game[20].varint.key = 0;
}

void clock_jump_up(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[20].evclock.clocktwo)) > 1
        && game[20].varint.j > 400) {
            sfSprite_setPosition(game[20].rectsprite.sprite,
                game[20].vecto.twof);
            sfSprite_setTexture(game[20].rectsprite.sprite,
                game[20].wintex.texture, sfTrue);
            sfSprite_setTextureRect(game[20].rectsprite.sprite,
                game[20].rectsprite.rect);
            sfRenderWindow_drawSprite(game[0].wintex.window,
                game[20].rectsprite.sprite, NULL);
            game[20].varint.j -= 40;
            game[20].vecto.twof.y = game[20].varint.j;
            sfClock_restart(game[20].evclock.clocktwo);
        }
    if (game[20].varint.j <= 400)
        game[20].varint.key = 2;
}

void clock_animated_player(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[20].evclock.clock)) > 80) {
            if (game[20].varint.left < 756) {
                game[20].varint.left += 126;
            }
            if (game[20].varint.left >= 756)
                game[20].varint.left = 0;
            game[20].rectsprite.rect.left = game[20].varint.left;
            sfClock_restart(game[20].evclock.clock);
        }
}

void clock_eighttwo_down(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[17].evclock.clocktwo)) > 20) {
            if (game[17].varint.j < -40) {
                game[17].varint.j++;
            }
            if (game[17].varint.j == -40)
                game[17].varint.key = 1;
            game[17].vecto.twof.y = game[17].varint.j;
            sfSprite_setPosition(game[17].rectsprite.sprite,
                game[17].vecto.twof);
            sfClock_restart(game[17].evclock.clocktwo);
        }
}

void clock_eighttwo_up(index_s *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[17].evclock.clocktwo)) > 20) {
            if (game[17].varint.j > -60)
                game[17].varint.j--;
            if (game[17].varint.j == -60)
                game[17].varint.key = 2;
            game[17].vecto.twof.y = game[17].varint.j;
            sfSprite_setPosition(game[17].rectsprite.sprite,
                game[17].vecto.twof);
            sfClock_restart(game[17].evclock.clocktwo);
        }
}