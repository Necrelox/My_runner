/*
** EPITECH PROJECT, 2020
** event_end
** File description:
** event_end
*/

#include "my_runner.h"

void event_cursor_end(index_s *end)
{
    end[27].vecto.twof = sfText_getPosition(end[27].texfont.text);
    end[28].vecto.twof = sfText_getPosition(end[28].texfont.text);
    end[4].vecto.twoi = sfMouse_getPosition(end[0].wintex.window);

    if (end[4].vecto.twoi.x >= end[28].vecto.twof.x
        && end[4].vecto.twoi.x <= end[28].vecto.twof.x + 150
        && end[4].vecto.twoi.y >= end[28].vecto.twof.y
        && end[4].vecto.twoi.y <= end[28].vecto.twof.y + 150) {
            end[0].wintex.texture = sfTexture_createFromFile(
            "img/menu/light.png", NULL);
            end[0].varint.breakint = 0;
        }
    if (end[4].vecto.twoi.x >= end[27].vecto.twof.x
        && end[4].vecto.twoi.x <= end[27].vecto.twof.x + 150
        && end[4].vecto.twoi.y >= end[27].vecto.twof.y
        && end[4].vecto.twoi.y <= end[27].vecto.twof.y + 150) {
            sfRenderWindow_close(end[0].wintex.window);
        }
}