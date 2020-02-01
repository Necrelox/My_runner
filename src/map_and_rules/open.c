/*
** EPITECH PROJECT, 2020
** open_set_rules
** File description:
** open_set_rules
*/

#include "my_runner.h"

int open_file(char *file)
{
    int fd = open(file, O_RDONLY);

    if (fd == 3)
        read_file(fd, file);
    if (fd != 3) {
        write (2, "error open map", 14);
        return (84);
    }
    return (0);
}