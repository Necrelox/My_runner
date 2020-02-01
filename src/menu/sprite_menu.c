/*
** EPITECH PROJECT, 2019
** sprite_menu
** File description:
** sprite_menu
*/

#include "my_runner.h"

index_s cursor_menu(void)
{
    index_s * cursor = malloc(sizeof(*cursor));

    cursor->rectsprite.rect.height = 200;
    cursor->rectsprite.rect.left = 0;
    cursor->rectsprite.rect.top = 0;
    cursor->rectsprite.rect.width = 200;
    cursor->varint.left = 0;
    cursor->varint.top = 0;
    cursor->rectsprite.sprite = sfSprite_create();
    cursor->wintex.texture = sfTexture_createFromFile(
        "img/menu/cursor.png", NULL);
    cursor->evclock.clock = sfClock_create();
    return (*cursor);
}

index_s text_quit(void)
{
    index_s * menu = malloc(sizeof(*menu));
    char *quit = "Quit";

    menu->texfont.font = sfFont_createFromFile(
        "font/menu/horror.ttf");
    menu->texfont.text = sfText_create();
    sfText_setString(menu->texfont.text, quit);
    menu->vecto.twof.x = 900;
    menu->vecto.twof.y = 550;
    sfText_setPosition(menu->texfont.text, menu->vecto.twof);
    menu->vecto.twoff.x = 2;
    menu->vecto.twoff.y = 2;
    sfText_setScale(menu->texfont.text, menu->vecto.twoff);
    sfText_setFont(menu->texfont.text, menu->texfont.font);
    return (*menu);
}

index_s text_play(void)
{
    index_s * menu = malloc(sizeof(*menu));
    char *play = "Play";

    menu->texfont.font = sfFont_createFromFile(
        "font/menu/horror.ttf");
    menu->texfont.text = sfText_create();
    sfText_setString(menu->texfont.text, play);
    menu->vecto.twof.x = 900;
    menu->vecto.twof.y = 425;
    sfText_setPosition(menu->texfont.text, menu->vecto.twof);
    menu->vecto.twoff.x = 2;
    menu->vecto.twoff.y = 2;
    sfText_setScale(menu->texfont.text, menu->vecto.twoff);
    sfText_setFont(menu->texfont.text, menu->texfont.font);
    return (*menu);
}

index_s icon_menu(void)
{
    index_s * menu = malloc(sizeof(*menu));

    menu->audio.music = sfMusic_createFromFile("music/game.ogg");
    menu->varint.audio = sfTrue;
    menu->varint.breakint = 0;
    menu->varint.i = 200;
    menu->varint.key = 1;
    menu->evclock.clock = sfClock_create();
    menu->vecto.twof.x = 675;
    menu->vecto.twof.y = menu->varint.i;
    menu->rectsprite.sprite = sfSprite_create();
    sfSprite_setPosition(menu->rectsprite.sprite, menu->vecto.twof);
    menu->vecto.twoff.x = 1;
    menu->vecto.twoff.y = 1;
    sfSprite_setScale(menu->rectsprite.sprite, menu->vecto.twoff);
    menu->wintex.texture = sfTexture_createFromFile(
        "img/menu/window_icon.png", NULL);
    return (*menu);
}

index_s my_menu(void)
{
    index_s * menu = malloc(sizeof(*menu));

    menu->audio.music = sfMusic_createFromFile("music/menu.ogg");
    menu->varint.audio = sfTrue;
    menu->wintex.scale.height = 1080;
    menu->wintex.scale.width = 1920;
    menu->wintex.scale.bitsPerPixel = 8;
    menu->varint.pause = 0;
    menu->wintex.window = sfRenderWindow_create(menu->wintex.scale,
        "SpookyRunner", sfDefaultStyle, NULL);
    menu->wintex.texture = sfTexture_createFromFile(
        "img/menu/light.png", NULL);
    menu->evclock.clock = sfClock_create();
    menu->rectsprite.sprite = sfSprite_create();
    sfRenderWindow_setFramerateLimit(menu->wintex.window, 40);
    sfRenderWindow_setMouseCursorVisible(menu->wintex.window, sfFalse);
    return (*menu);
}