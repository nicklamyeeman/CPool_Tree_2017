/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include <stdlib.h>
#include "my.h"

int usage(int ret)
{
    my_putstr("USAGE\n");
    my_putstr("\t./tree size\n");
    my_putstr("\nDESCRIPTION\n");
    my_putstr("\tsize\t\tsize of the Christmas tree to be compute\n");
    return (ret);
}

int main (int ac, char **av)
{
    if (ac != 2)
        return (usage(84));
    if (my_strcmp(av[1], "-h") == 0 || my_strcmp(av[1], "--help") == 0)
        return (usage(0));
    if (my_getnbr(av[1]) > 0)
        tree(my_getnbr(av[1]));
    else
        return (usage(84));
    return (0);
}
