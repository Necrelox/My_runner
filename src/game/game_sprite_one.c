/*
** EPITECH PROJECT, 2020
** game_sprite
** File description:
** game_sprite
*/

#include "my_runner.h"

index_s asset_four_two(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/4.png", NULL);
    game->varint.i = 1920;
    game->vecto.twof.x = 1920;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s asset_four(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/4.png", NULL);
    game->varint.i = 0;
    game->vecto.twof.x = 0;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s game_fog_bat_two(void)
{
    index_s *game_two = malloc(sizeof(*game_two));

    game_two->evclock.clock = sfClock_create();
    game_two->rectsprite.sprite = sfSprite_create();
    game_two->wintex.texture = sfTexture_createFromFile(
        "img/parallax/3.png", NULL);
    game_two->varint.ii = 1920;
    game_two->vecto.twof.x = 1920;
    game_two->vecto.twof.y = 0;
    sfSprite_setPosition(game_two->rectsprite.sprite, game_two->vecto.twof);
    return (*game_two);
}

index_s game_fog_bat(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/3.png", NULL);
    game->varint.ii = 0;
    game->vecto.twof.x = 0;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s game_moon(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/2.png", NULL);
    game->vecto.twof.x = 350;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}