/*
** EPITECH PROJECT, 2020
** pause_game
** File description:
** pause_game
*/

#include "my_runner.h"

void event_cursor_clicktwo(index_s *game)
{
    game[24].vecto.twof = sfText_getPosition(game[24].texfont.text);
    game[3].vecto.twof = sfText_getPosition(game[3].texfont.text);
    game[4].vecto.twoi = sfMouse_getPosition(game[0].wintex.window);

    if (game[4].vecto.twoi.x >= game[2].vecto.twof.x
        && game[4].vecto.twoi.x <= game[2].vecto.twof.x + 150
        && game[4].vecto.twoi.y >= game[2].vecto.twof.y
        && game[4].vecto.twoi.y <= game[2].vecto.twof.y + 150) {
            game[0].wintex.texture = sfTexture_createFromFile(
            "img/parallax/1.png", NULL);
            game[0].varint.pause = 0;
        }
    if (game[4].vecto.twoi.x >= game[3].vecto.twof.x
        && game[4].vecto.twoi.x <= game[3].vecto.twof.x + 150
        && game[4].vecto.twoi.y >= game[3].vecto.twof.y
        && game[4].vecto.twoi.y <= game[3].vecto.twof.y + 150) {
            sfRenderWindow_close(game[0].wintex.window);
        }
}

void display_pause_two(index_s *game)
{
    sfSprite_setTexture(game[1].rectsprite.sprite,
        game[1].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[1].rectsprite.sprite, NULL);
    if (game[1].varint.key == 1)
        clock_window_icon_up(game);
    if (game[1].varint.key == 2)
        clock_window_icon_down(game);
    sfRenderWindow_drawText(game[0].wintex.window, game[3].texfont.text, NULL);
    sfRenderWindow_drawText(game[0].wintex.window, game[24].texfont.text, NULL);
    clock_animate_cursor(game);
    clock_cursor(game);
}

void display_pause(index_s *game)
{
    game[0].wintex.texture = sfTexture_createFromFile(
        "img/menu/light.png", NULL);
    sfRenderWindow_display(game[0].wintex.window);
    sfSprite_setTexture(game[0].rectsprite.sprite,
        game[0].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0].wintex.window,
        game[0].rectsprite.sprite, NULL);
    display_pause_two(game);
}

int pause_game(index_s * game)
{
    if (game[0].varint.pause == 1) {
        game[0].varint.pause = 0;
        game[0].wintex.texture = sfTexture_createFromFile(
            "img/parallax/1.png", NULL);
        return (0);
    }
    if (game[0].varint.pause == 0) {
        game[0].varint.pause = 1;
        return (0);
    }
    return (0);
}