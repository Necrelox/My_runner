/*
** EPITECH PROJECT, 2020
** game_sprite_three
** File description:
** game_sprite_three
*/

#include "my_runner.h"

index_s asset_eight_two(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->evclock.clocktwo = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/8.png", NULL);
    game->varint.key = 1;
    game->varint.i = 1920;
    game->varint.j = -40;
    game->vecto.twof.x = 1920;
    game->vecto.twof.y = -40;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s asset_eight(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->evclock.clocktwo = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/8.png", NULL);
    game->varint.key = 1;
    game->varint.i = 0;
    game->varint.j = -40;
    game->vecto.twof.x = 0;
    game->vecto.twof.y = -40;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s asset_seven_two(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/7.png", NULL);
    game->varint.i = 1920;
    game->vecto.twof.x = 1920;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s asset_seven(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/7.png", NULL);
    game->varint.i = 0;
    game->vecto.twof.x = 0;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}