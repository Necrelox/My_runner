/*
** EPITECH PROJECT, 2020
** clock_menu
** File description:
** clock_menu
*/

#include "my_runner.h"

void clock_window_icon_down(index_s *menu)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        menu[1].evclock.clock)) > 60 && menu[1].varint.i > 175) {
            menu[1].varint.i--;
            menu[1].vecto.twof.x = 675;
            menu[1].vecto.twof.y = menu[1].varint.i;
            sfSprite_setPosition(menu[1].rectsprite.sprite, menu[1].vecto.twof);
            sfClock_restart(menu[1].evclock.clock);
        }
        if (menu[1].varint.i == 175)
            menu[1].varint.key = 1;
}

void clock_window_icon_up(index_s *menu)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        menu[1].evclock.clock)) > 60 && menu[1].varint.i < 225) {
            menu[1].varint.i++;
            menu[1].vecto.twof.x = 675;
            menu[1].vecto.twof.y = menu[1].varint.i;
            sfSprite_setPosition(menu[1].rectsprite.sprite, menu[1].vecto.twof);
            sfClock_restart(menu[1].evclock.clock);
        }
        if (menu[1].varint.i == 225)
            menu[1].varint.key = 2;
}

void clock_animate_cursor(index_s *menu)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        menu[0].evclock.clock)) > 60) {
            anime_cursor(menu);
            sfClock_restart(menu[0].evclock.clock);
        }
}

void clock_cursor(index_s *menu)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        menu[4].evclock.clock)) > 1) {
            menu[4].vecto.twof.x = sfMouse_getPositionRenderWindow(
            menu[0].wintex.window).x - 100;
            menu[4].vecto.twof.y = sfMouse_getPositionRenderWindow(
            menu[0].wintex.window).y - 100;
            sfSprite_setPosition(menu[4].rectsprite.sprite, menu[4].vecto.twof);
            sfSprite_setTexture(menu[4].rectsprite.sprite,
                menu[4].wintex.texture, sfTrue);
            sfSprite_setTextureRect(menu[4].rectsprite.sprite,
                menu[4].rectsprite.rect);
            sfRenderWindow_drawSprite(menu[0].wintex.window,
                menu[4].rectsprite.sprite, NULL);
            sfClock_restart(menu[4].evclock.clock);
        }
}