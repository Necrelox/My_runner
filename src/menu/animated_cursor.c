/*
** EPITECH PROJECT, 2020
** animated_cursor
** File description:
** animated_cursor_from_clock
*/

#include "my_runner.h"

void anime_cursor_three(index_s *menu)
{
    if (menu[4].varint.top == 760 && menu[4].varint.left == 760) {
        menu[4].varint.left = 0;
        menu[4].varint.top += 190;
        menu[4].rectsprite.rect.left = menu[4].varint.left;
        menu[4].rectsprite.rect.top = menu[4].varint.top;
    }
    if (menu[4].varint.top == 950 && menu[4].varint.left == 760) {
        menu[4].varint.left = 0;
        menu[4].varint.top = 0;
        menu[4].rectsprite.rect.left = menu[4].varint.left;
        menu[4].rectsprite.rect.top = menu[4].varint.top;
    }
}

void anime_cursor_two(index_s *menu)
{
    if (menu[4].varint.top == 380 && menu[4].varint.left == 760) {
        menu[4].varint.left = 0;
        menu[4].varint.top += 190;
        menu[4].rectsprite.rect.left = menu[4].varint.left;
        menu[4].rectsprite.rect.top = menu[4].varint.top;
    }
    if (menu[4].varint.top == 570 && menu[4].varint.left == 760) {
        menu[4].varint.left = 0;
        menu[4].varint.top += 190;
        menu[4].rectsprite.rect.left = menu[4].varint.left;
        menu[4].rectsprite.rect.top = menu[4].varint.top;
    }
    anime_cursor_three(menu);
}

void anime_cursor(index_s *menu)
{
    if (menu[4].varint.left < 760) {
        menu[4].varint.left += 190;
        menu[4].rectsprite.rect.left = menu[4].varint.left;
        menu[4].rectsprite.rect.top = menu[4].varint.top;
    }

    if (menu[4].varint.top == 0 && menu[4].varint.left == 760) {
        menu[4].varint.left = 0;
        menu[4].varint.top += 190;
        menu[4].rectsprite.rect.left = menu[4].varint.left;
        menu[4].rectsprite.rect.top = menu[4].varint.top;
        }
    if (menu[4].varint.top == 190 && menu[4].varint.left == 760) {
        menu[4].varint.left = 0;
        menu[4].varint.top += 190;
        menu[4].rectsprite.rect.left = menu[4].varint.left;
        menu[4].rectsprite.rect.top = menu[4].varint.top;
        }
    anime_cursor_two(menu);
}