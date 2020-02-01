/*
** EPITECH PROJECT, 2020
** game_sprite
** File description:
** game_sprite
*/

#include "my_runner.h"

index_s asset_six_two(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/6.png", NULL);
    game->varint.i = 1920;
    game->vecto.twof.x = 1920;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s asset_six(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/6.png", NULL);
    game->varint.i = 0;
    game->vecto.twof.x = 0;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s asset_five_two(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/5.png", NULL);
    game->varint.i = 1920;
    game->vecto.twof.x = 1920;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s asset_five(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/5.png", NULL);
    game->varint.i = 0;
    game->vecto.twof.x = 0;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}