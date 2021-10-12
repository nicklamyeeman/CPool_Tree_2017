/*
** EPITECH PROJECT, 2021
** CPool_Tree_2017
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}