/*
** EPITECH PROJECT, 2020
** menu
** File description:
** menu
*/

#include "my_runner.h"

void event_cursor_click_two(index_s *menu)
{
    if (menu[0].evclock.event.type == sfEvtClosed)
    sfRenderWindow_close(menu[0].wintex.window);
}

void event_cursor_click(index_s *menu)
{
    menu[2].vecto.twof = sfText_getPosition(menu[2].texfont.text);
    menu[3].vecto.twof = sfText_getPosition(menu[3].texfont.text);
    menu[4].vecto.twoi = sfMouse_getPosition(menu[0].wintex.window);

    if (menu[4].vecto.twoi.x >= menu[2].vecto.twof.x
        && menu[4].vecto.twoi.x <= menu[2].vecto.twof.x + 150
        && menu[4].vecto.twoi.y >= menu[2].vecto.twof.y
        && menu[4].vecto.twoi.y <= menu[2].vecto.twof.y + 150) {
            menu[0].varint.breakint = 1;
        }
    if (menu[4].vecto.twoi.x >= menu[3].vecto.twof.x
        && menu[4].vecto.twoi.x <= menu[3].vecto.twof.x + 150
        && menu[4].vecto.twoi.y >= menu[3].vecto.twof.y
        && menu[4].vecto.twoi.y <= menu[3].vecto.twof.y + 150) {
            sfRenderWindow_close(menu[0].wintex.window);
        }
}

void window_menu(index_s *menu)
{
    sfRenderWindow_display(menu[0].wintex.window);
    sfSprite_setTexture(menu[0].rectsprite.sprite,
        menu[0].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(menu[0].wintex.window,
        menu[0].rectsprite.sprite, NULL);
    sfSprite_setTexture(menu[1].rectsprite.sprite,
        menu[1].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(menu[0].wintex.window,
        menu[1].rectsprite.sprite, NULL);
    if (menu[1].varint.key == 1)
        clock_window_icon_up(menu);
    if (menu[1].varint.key == 2)
        clock_window_icon_down(menu);

    sfRenderWindow_drawText(menu[0].wintex.window, menu[2].texfont.text, NULL);
    sfRenderWindow_drawText(menu[0].wintex.window, menu[3].texfont.text, NULL);
    clock_animate_cursor(menu);
    clock_cursor(menu);
}

void display_menu(index_s *menu)
{
    sfMusic_setLoop(menu[0].audio.music, sfTrue);
    if (menu[0].varint.audio == sfTrue)
        sfMusic_play(menu[0].audio.music);
    while (sfRenderWindow_isOpen(menu[0].wintex.window)) {
        window_menu(menu);
        while (sfRenderWindow_pollEvent(menu[0].wintex.window,
            &menu[0].evclock.event)) {
            event_cursor_click_two(menu);
            if (menu[0].evclock.event.type == sfEvtMouseButtonPressed)
                if (menu[0].evclock.event.key.code == sfMouseLeft)
                    event_cursor_click(menu);
            }
            if (menu[0].varint.breakint == 1) {
                break;
            }
    }
    if (menu[0].varint.breakint == 1)
        go_game(menu);
}

void prepare_my_menu(void)
{
    index_s runner[35];
    runner[0] = my_menu();
    runner[1] = icon_menu();
    runner[2] = text_play();
    runner[3] = text_quit();
    runner[4] = cursor_menu();
    display_menu(runner);
}