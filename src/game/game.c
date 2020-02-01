/*
** EPITECH PROJECT, 2020
** game
** File description:
** game
*/

#include "my_runner.h"

void window_game_three(index_s *game)
{
    clock_asset_five(game);
    clock_asset_fivetwo(game);
    sfSprite_setTexture(game[12].rectsprite.sprite,
        game[12].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[12].rectsprite.sprite, NULL);
    sfSprite_setTexture(game[13].rectsprite.sprite,
        game[13].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[13].rectsprite.sprite, NULL);
    clock_asset_six(game);
    clock_asset_sixtwo(game);
    window_game_four(game);
}

void window_game_two(index_s *game)
{
    sfSprite_setTexture(game[8].rectsprite.sprite,
        game[8].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[8].rectsprite.sprite, NULL);
    sfSprite_setTexture(game[9].rectsprite.sprite,
        game[9].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[9].rectsprite.sprite, NULL);
    clock_assetfour(game);
    clock_assetfour_two(game);
    sfSprite_setTexture(game[10].rectsprite.sprite,
        game[10].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[10].rectsprite.sprite, NULL);
    sfSprite_setTexture(game[11].rectsprite.sprite,
        game[11].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[11].rectsprite.sprite, NULL);
    window_game_three(game);
}

void window_game(index_s *game)
{
    sfRenderWindow_display(game[0].wintex.window);
    sfSprite_setTexture(game[0].rectsprite.sprite,
        game[0].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[0].rectsprite.sprite, NULL);
    sfSprite_setTexture(game[5].rectsprite.sprite,
        game[5].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[5].rectsprite.sprite, NULL);
    sfSprite_setTexture(game[6].rectsprite.sprite,
        game[6].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[6].rectsprite.sprite, NULL);
    sfSprite_setTexture(game[7].rectsprite.sprite,
        game[7].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[7].rectsprite.sprite, NULL);
    clock_bat(game);
    clock_bat_two(game);
    window_game_two(game);
}

void loop_my_game(index_s *game)
{
    while (sfRenderWindow_isOpen(game[0].wintex.window)) {
        if (game[0].varint.pause == 0)
            window_game(game);
        if (game[0].varint.pause == 1)
            display_pause(game);
        while (sfRenderWindow_pollEvent(game[0].wintex.window,
        &game[0].evclock.event)) {
            if (game[0].evclock.event.type == sfEvtMouseButtonPressed)
                event_manage_two(game);
            if (game[0].evclock.event.type == sfEvtKeyPressed)
                event_manage_one(game);
            if (game[0].evclock.event.type == sfEvtClosed)
                sfRenderWindow_close(game[0].wintex.window);
        }
        if (game[0].varint.breakint == 3)
            break;
    }
    if (game[0].varint.breakint == 3)
        go_to_end(game);
}

void prepare_my_game(index_s *game)
{
    game[13] = asset_six_two();
    game[14] = asset_seven();
    game[15] = asset_seven_two();
    game[16] = asset_eight();
    game[17] = asset_eight_two();
    game[18] = asset_nine();
    game[19] = asset_nine_two();
    game[20] = player();
    game[21] = asset_fantom();
    game[22] = asset_fantom_two();
    game[23] = monster();
    game[24] = text_resume();
    game[25] = text_score();
    game[26] = text_scoretwo();
    game[29] = monster2();
    loop_my_game(game);
}