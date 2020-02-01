/*
** EPITECH PROJECT, 2020
** translate_map
** File description:
** translate_map
*/

#include "my_runner.h"

void map_translate(map_s *map, char *buff)
{
    int i = 32;
    int j = 0;

    for (; buff[i] != '\0'; i++) {
        if (buff[i] == map->def[3][0]) {
            map->def[5][j] = map->def[1][0];
            j++;
        }
        if (buff[i] == map->def[4][0]) {
            map->def[5][j] = map->def[2][0];
            j++;
        }
    }
    map->def[5][j] = '\0';
    prepare_my_menu(map);
}

int define_time(char *buff)
{
    int i = 21;
    int save = 1;
    int count = 0;
    int result = 0;

    for (; buff[i] != ')'; i++);
    i--;
    for (; buff[i] != '('; i--) {
        count = (buff[i] - 48) * save;
        result += count;
        save = save * 10;
    }
    return (result);
}

void init_map(char *buff, int buff_size)
{
    map_s *map = malloc(sizeof(*map));
    map->time = define_time(buff);
    map->def = malloc(sizeof(char *) * 7);
    map->def[3] = malloc(sizeof(char) * 2);
    map->def[4] = malloc(sizeof(char) * 2);
    map->def[5] = malloc(sizeof(char) * (buff_size));
    map->def[1] = "1";
    map->def[2] = "0";
    map->def[3][0] = buff[1];
    map->def[3][1] = '\0';
    map->def[4][0] = buff[15];
    map->def[4][1] = '\0';
    map_translate(map, buff);
    free (map->def[5]);
    free (map->def[4]);
    free (map->def[3]);
    free (map->def);
    free (map);
}