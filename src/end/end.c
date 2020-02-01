/*
** EPITECH PROJECT, 2020
** end
** File description:
** end
*/

#include "my_runner.h"

void window_end(index_s *end)
{
    sfRenderWindow_display(end[0].wintex.window);
    sfSprite_setTexture(end[0].rectsprite.sprite,
        end[0].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(end[0].wintex.window,
        end[0].rectsprite.sprite, NULL);
    sfRenderWindow_drawText(end[0].wintex.window, end[27].texfont.text, NULL);
    sfRenderWindow_drawText(end[0].wintex.window, end[28].texfont.text, NULL);
    clock_animate_cursor(end);
    clock_cursor(end);
}

void display_end(index_s *end)
{
    while (sfRenderWindow_isOpen(end[0].wintex.window)) {
        window_end(end);
        while (sfRenderWindow_pollEvent(end[0].wintex.window,
        &end[0].evclock.event)) {
            if (end[0].evclock.event.type == sfEvtMouseButtonPressed)
                if (end[0].evclock.event.key.code == sfMouseLeft)
                    event_cursor_end(end);
            if (end[0].evclock.event.type == sfEvtClosed)
                sfRenderWindow_close(end[0].wintex.window);
        }
        if (end[0].varint.breakint == 0)
            break;
    }
    if (end[0].varint.breakint == 0) {
        sfRenderWindow_close(end[0].wintex.window);
        sfMusic_stop(end[0].audio.music);
        prepare_my_menu();
    }
}