/*
** EPITECH PROJECT, 2020
** game_sprite_four
** File description:
** game_sprite_four
*/

#include "my_runner.h"

index_s asset_fantom_two(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->evclock.clocktwo = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/77.png", NULL);
    game->varint.key = 1;
    game->varint.i = 1920;
    game->vecto.twof.x = 1920;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s asset_fantom(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->evclock.clocktwo = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/77.png", NULL);
    game->varint.i = 0;
    game->varint.key = 1;
    game->vecto.twof.x = 0;
    game->vecto.twof.y = 0;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s player(void)
{
    index_s * player = malloc(sizeof(*player));

    player->rectsprite.rect.height = 150;
    player->rectsprite.rect.left = 0;
    player->rectsprite.rect.top = 0;
    player->rectsprite.rect.width = 120;
    player->varint.left = 0;
    player->varint.top = 0;
    player->vecto.twof.x = 10;
    player->vecto.twof.y = 790;
    player->vecto.twoff.y = 790;
    player->varint.j = 790;
    player->varint.key = 0;
    player->rectsprite.sprite = sfSprite_create();
    player->wintex.texture = sfTexture_createFromFile(
        "img/entity/player2.png", NULL);
    player->evclock.clock = sfClock_create();
    player->evclock.clocktwo = sfClock_create();
    return (*player);
}

index_s asset_nine_two(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/ground.png", NULL);
    game->varint.i = 1920;
    game->vecto.twof.x = 1920;
    game->vecto.twof.y = -100;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}

index_s asset_nine(void)
{
    index_s *game = malloc(sizeof(*game));

    game->evclock.clock = sfClock_create();
    game->rectsprite.sprite = sfSprite_create();
    game->wintex.texture = sfTexture_createFromFile(
        "img/parallax/ground.png", NULL);
    game->varint.i = 0;
    game->vecto.twof.x = 0;
    game->vecto.twof.y = -100;
    sfSprite_setPosition(game->rectsprite.sprite, game->vecto.twof);
    return (*game);
}