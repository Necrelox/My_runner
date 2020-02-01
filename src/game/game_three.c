/*
** EPITECH PROJECT, 2020
** game_three
** File description:
** game_three
*/

#include "my_runner.h"

void window_game_eight(index_s *game)
{
    sfSprite_setPosition(game[29].rectsprite.sprite, game[29].vecto.twof);
    sfSprite_setTexture(game[29].rectsprite.sprite,
        game[29].wintex.texture, sfTrue);
    sfSprite_setTextureRect(game[29].rectsprite.sprite,
        game[29].rectsprite.rect);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[29].rectsprite.sprite, NULL);
    clock_monster2(game);
    player_collision_monster2(game);
}