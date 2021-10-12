/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "my.h"
#include <stdlib.h>

int main (int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (atoi(av[1]) > 0)
        tree(atoi(av[1]));
    return (0);
}
