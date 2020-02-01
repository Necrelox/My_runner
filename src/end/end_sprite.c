/*
** EPITECH PROJECT, 2020
** end_sprite
** File description:
** end_sprite
*/

#include "my_runner.h"

index_s play(void)
{
    index_s * play = malloc(sizeof(*play));
    char *exit = "play";

    play->texfont.font = sfFont_createFromFile(
        "font/menu/horror.ttf");
    play->texfont.text = sfText_create();
    sfText_setString(play->texfont.text, exit);
    play->vecto.twof.x = 850;
    play->vecto.twof.y = 475;
    sfText_setPosition(play->texfont.text, play->vecto.twof);
    play->vecto.twoff.x = 2;
    play->vecto.twoff.y = 2;
    sfText_setScale(play->texfont.text, play->vecto.twoff);
    sfText_setFont(play->texfont.text, play->texfont.font);
    return (*play);
}

index_s quit_end(void)
{
    index_s * quit = malloc(sizeof(*quit));
    char *exit = "quit";

    quit->texfont.font = sfFont_createFromFile(
        "font/menu/horror.ttf");
    quit->texfont.text = sfText_create();
    sfText_setString(quit->texfont.text, exit);
    quit->vecto.twof.x = 850;
    quit->vecto.twof.y = 625;
    sfText_setPosition(quit->texfont.text, quit->vecto.twof);
    quit->vecto.twoff.x = 2;
    quit->vecto.twoff.y = 2;
    sfText_setScale(quit->texfont.text, quit->vecto.twoff);
    sfText_setFont(quit->texfont.text, quit->texfont.font);
    return (*quit);
}