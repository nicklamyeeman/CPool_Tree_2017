/*
** EPITECH PROJECT, 2021
** CPool_Tree_2017
** File description:
** my_putchar
*/

#include <unistd.h>
#include <stdbool.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

bool is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (true);
    return (false);
}

int my_getnbr(char *nbr)
{
    int multiplier = 1;
    int nb = 0;

    for (; *nbr == '-' || *nbr == '+'; nbr++)
        multiplier *= (*nbr == '-') ? -1 : 1;
    for (; *nbr != '\0' && is_digit(*nbr); nbr++) {
        nb *= 10;
        nb += *nbr - '0';
    }
    return (nb * multiplier);
}

int my_strcmp(char *str1, char *str2)
{
    while (*str1 != '\0' && *str2 != '\0' && (*str1) == (*str2)) {
        str1 += 1;
        str2 += 1;
    }
    return (*str1 - *str2);
}