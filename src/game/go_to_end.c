/*
** EPITECH PROJECT, 2020
** go_to_end
** File description:
** go_to_end
*/

#include "my_runner.h"

void go_to_end(index_s *game)
{
    game[0].wintex.texture = sfTexture_createFromFile(
        "img/over/game_over.png", NULL);
    game[27] = quit_end();
    game[28] = play();
    sfMusic_stop(game[1].audio.music);
    sfMusic_setLoop(game[0].audio.music, sfTrue);
    if (game[1].varint.audio == sfTrue)
        sfMusic_play(game[0].audio.music);
    display_end(game);
}