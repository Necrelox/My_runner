/*
** EPITECH PROJECT, 2020
** event
** File description:
** event
*/

#include "my_runner.h"

void event_manage_two(index_s *game)
{
    if (game[0].evclock.event.key.code == sfMouseLeft
        && game[0].varint.pause == 1) {
            event_cursor_clicktwo(game);
        }
}

void event_manage_one(index_s *game)
{
    player_movement(game);
    if (game[0].evclock.event.key.code == sfKeySpace
        && game[20].varint.key == 0 && game[0].varint.pause == 0)
            event_game_one(game);
    if (game[0].evclock.event.key.code == sfKeyEscape)
        pause_game(game);
}