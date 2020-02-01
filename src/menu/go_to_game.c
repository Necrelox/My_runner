/*
** EPITECH PROJECT, 2020
** go_to_game
** File description:
** go_to_game
*/

#include "my_runner.h"

void go_game(index_s *game)
{
    game[0].wintex.texture = sfTexture_createFromFile(
        "img/parallax/1.png", NULL);
    game[5] = game_moon();
    game[6] = game_fog_bat();
    game[7] = game_fog_bat_two();
    game[8] = asset_four();
    game[9] = asset_four_two();
    game[10] = asset_five();
    game[11] = asset_five_two();
    game[12] = asset_six();
    sfMusic_stop(game[0].audio.music);
    sfMusic_setLoop(game[1].audio.music, sfTrue);
    if (game[1].varint.audio == sfTrue)
        sfMusic_play(game[1].audio.music);
    prepare_my_game(game);
}