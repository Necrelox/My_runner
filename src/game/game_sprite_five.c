/*
** EPITECH PROJECT, 2020
** game_sprite_five
** File description:
** game_sprite_five
*/

#include "my_runner.h"

index_s monster2(void)
{
    index_s * monster = malloc(sizeof(*monster));

    monster->rectsprite.rect.height = 125;
    monster->rectsprite.rect.left = 0;
    monster->rectsprite.rect.top = 0;
    monster->rectsprite.rect.width = 120;
    monster->varint.left = 0;
    monster->varint.top = 0;
    monster->varint.j = 0;
    monster->vecto.twof.x = 1750;
    monster->vecto.twof.y = 625;
    monster->rectsprite.sprite = sfSprite_create();
    monster->wintex.texture = sfTexture_createFromFile(
        "img/entity/monster2.png", NULL);
    monster->evclock.clock = sfClock_create();
    monster->evclock.clocktwo = sfClock_create();
    return (*monster);
}

index_s text_scoretwo(void)
{
    index_s * score = malloc(sizeof(*score));
    char *scor = "0";

    score->varchar.str = malloc(sizeof(char) * (12 + 1));
    score->varint.j = 0;
    score->texfont.font = sfFont_createFromFile(
        "font/menu/horror.ttf");
    score->texfont.text = sfText_create();
    sfText_setString(score->texfont.text, scor);
    score->vecto.twof.x = 130;
    score->vecto.twof.y = 10;
    sfText_setPosition(score->texfont.text, score->vecto.twof);
    score->vecto.twoff.x = 1;
    score->vecto.twoff.y = 1;
    sfText_setScale(score->texfont.text, score->vecto.twoff);
    sfText_setFont(score->texfont.text, score->texfont.font);
    score->evclock.clock = sfClock_create();
    return (*score);
}

index_s text_score(void)
{
    index_s * score = malloc(sizeof(*score));
    char *scor = "Score";

    score->texfont.font = sfFont_createFromFile(
        "font/menu/horror.ttf");
    score->texfont.text = sfText_create();
    sfText_setString(score->texfont.text, scor);
    score->vecto.twof.x = 10;
    score->vecto.twof.y = 10;
    sfText_setPosition(score->texfont.text, score->vecto.twof);
    score->vecto.twoff.x = 1;
    score->vecto.twoff.y = 1;
    sfText_setScale(score->texfont.text, score->vecto.twoff);
    sfText_setFont(score->texfont.text, score->texfont.font);
    return (*score);
}

index_s text_resume(void)
{
    index_s * resume = malloc(sizeof(*resume));
    char *resum = "resume";

    resume->texfont.font = sfFont_createFromFile(
        "font/menu/horror.ttf");
    resume->texfont.text = sfText_create();
    sfText_setString(resume->texfont.text, resum);
    resume->vecto.twof.x = 850;
    resume->vecto.twof.y = 400;
    sfText_setPosition(resume->texfont.text, resume->vecto.twof);
    resume->vecto.twoff.x = 2;
    resume->vecto.twoff.y = 2;
    sfText_setScale(resume->texfont.text, resume->vecto.twoff);
    sfText_setFont(resume->texfont.text, resume->texfont.font);
    return (*resume);
}

index_s monster(void)
{
    index_s * monster = malloc(sizeof(*monster));

    monster->rectsprite.rect.height = 125;
    monster->rectsprite.rect.left = 0;
    monster->rectsprite.rect.top = 0;
    monster->rectsprite.rect.width = 100;
    monster->varint.left = 0;
    monster->varint.top = 0;
    monster->vecto.twof.x = 1750;
    monster->vecto.twof.y = 805;
    monster->varint.ii = 0;
    monster->rectsprite.sprite = sfSprite_create();
    monster->wintex.texture = sfTexture_createFromFile(
        "img/entity/monster.png", NULL);
    monster->evclock.clock = sfClock_create();
    monster->evclock.clocktwo = sfClock_create();
    return (*monster);
}