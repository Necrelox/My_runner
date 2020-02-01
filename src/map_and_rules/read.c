/*
** EPITECH PROJECT, 2020
** read
** File description:
** read
*/

#include "my_runner.h"

int read_file(int fd, char *file)
{
    int op = 0;
    struct stat size;
    stat(file, &size);
    int buff_size = size.st_size;
    char buff[buff_size + 1];

    op = read(fd, buff, buff_size);
    buff[buff_size] = '\0';
    if (op > buff_size) {
        write(2, "read failed\n", 13);
        return (84);
    }
    else {
        init_map(buff, buff_size);
        return (0);
    }
    return (0);
}