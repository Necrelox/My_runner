/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my_runner.h"
#include "my.h"

int main(int ac, char **av)
{
    if (ac < 2) {
        my_putstr("Use ./my_runner -h");
        return (84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("Welcome to SpookyRunner.\n");
        my_putstr("you have to survive the longest by");
        my_putstr(" dodging or killing monsters\n");
        my_putstr("\n\tUse Q or KeyLeft for Move to Left\n\t");
        my_putstr("Use D or KeyRight for Move to Right\n\t");
        my_putstr("Use Space for Jump\n\t");
        my_putstr("Use Escape for Pause or Resume.\n");
        my_putstr("\nHave a little fun !\n");
        my_putstr("\nFor Start Game : ./my_runner play");
        return (0);
    }
    else {
        prepare_my_menu();
        return (0);
    }
}