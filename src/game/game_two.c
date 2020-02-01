/*
** EPITECH PROJECT, 2020
** game_two
** File description:
** game_two
*/

#include "my_runner.h"

void window_game_seven(index_s  *game)
{
    sfSprite_setPosition(game[23].rectsprite.sprite, game[23].vecto.twof);
    sfSprite_setTexture(game[23].rectsprite.sprite,
        game[23].wintex.texture, sfTrue);
    sfSprite_setTextureRect(game[23].rectsprite.sprite,
        game[23].rectsprite.rect);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[23].rectsprite.sprite, NULL);
    clock_monster(game);
    clock_animate_monster(game);
    window_game_eight(game);
    sfRenderWindow_drawText(game[0].wintex.window, game[25].texfont.text, NULL);
    sfRenderWindow_drawText(game[0].wintex.window, game[26].texfont.text, NULL);
    clock_score(game);
    player_collision_monster(game);
}

void display_fantom(index_s *game)
{
    clock_asset_fantom(game);
    clock_asset_fantomtwo(game);
    if (game[21].varint.key == 1)
        clock_fantom_up(game);
    if (game[21].varint.key == 2)
        clock_fantom_down(game);
    if (game[22].varint.key == 1)
        clock_fantomtwo_up(game);
    if (game[22].varint.key == 2)
        clock_fantomtwo_down(game);
    sfSprite_setTexture(game[21].rectsprite.sprite,
        game[21].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[21].rectsprite.sprite, NULL);
    sfSprite_setTexture(game[22].rectsprite.sprite,
        game[22].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[22].rectsprite.sprite, NULL);
}

void window_game_six(index_s *game)
{
    window_game_seven(game);
    clock_asset_nine(game);
    clock_asset_ninetwo(game);
    if (game[20].varint.key == 2) {
        player_jump_down(game);
    }
    if (game[20].varint.key == 1) {
        player_jump_up(game);
    }
    if (game[20].varint.key == 0) {
        game[20].rectsprite.rect.top = 0;
        sfSprite_setPosition(game[20].rectsprite.sprite, game[20].vecto.twof);
        sfSprite_setTexture(game[20].rectsprite.sprite,
            game[20].wintex.texture, sfTrue);
        sfSprite_setTextureRect(game[20].rectsprite.sprite,
            game[20].rectsprite.rect);
        sfRenderWindow_drawSprite(game[0].wintex.window,
            game[20].rectsprite.sprite, NULL);
        clock_animated_player(game);
    }
}

void window_game_five(index_s *game)
{
    clock_asset_eight(game);
    clock_asset_eightwo(game);
    if (game[16].varint.key == 1)
        clock_eight_up(game);
    if (game[16].varint.key == 2)
        clock_eight_down(game);
    if (game[17].varint.key == 1)
        clock_eighttwo_up(game);
    if (game[17].varint.key == 2)
        clock_eighttwo_down(game);
    sfSprite_setTexture(game[18].rectsprite.sprite,
        game[18].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[18].rectsprite.sprite, NULL);
    sfSprite_setTexture(game[19].rectsprite.sprite,
        game[19].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[19].rectsprite.sprite, NULL);
    window_game_six(game);
}

void window_game_four(index_s *game)
{
    display_fantom(game);
    sfSprite_setTexture(game[14].rectsprite.sprite,
        game[14].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[14].rectsprite.sprite, NULL);
    sfSprite_setTexture(game[15].rectsprite.sprite,
        game[15].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[15].rectsprite.sprite, NULL);
    clock_asset_seven(game);
    clock_asset_seventwo(game);
    sfSprite_setTexture(game[16].rectsprite.sprite,
        game[16].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[16].rectsprite.sprite, NULL);
    sfSprite_setTexture(game[17].rectsprite.sprite,
        game[17].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[17].rectsprite.sprite, NULL);
    window_game_five(game);
}