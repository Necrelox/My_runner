/*
** EPITECH PROJECT, 2020
** set_string_score
** File description:
** set_string_score
*/

#include "my_runner.h"
#include "my.h"

void set_score_convert(index_s *game)
{
    int mem = 0;
    int nb = game[26].varint.j;
    int nb2 = game[26].varint.j;
    int i = 0;
    int ret = 0;

    while (nb != 0) {
        mem++;
        nb = nb / 10;
    }

    for (; i < mem; i++)
    {
        ret = nb2 % 10;
        nb2 = nb2 / 10;
        game[26].varchar.str[i] = ret + 48;
    }
    game[26].varchar.str[i] = '\0';
    game[26].varchar.str = my_revstr(game[26].varchar.str);
}