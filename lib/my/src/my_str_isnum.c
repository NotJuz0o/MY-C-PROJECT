/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_str_isnum.c
*/

#include "../includes/my.h"

int my_str_isnum(char const *str)
{
    int index = 0;

    if (str[0] == '\0')
        return 1;
    while (str[index] != '\0') {
        if (str[index] < '0' || str[index] > '9')
            return 0;
        index++;
    }
    return 1;
}
