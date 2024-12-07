/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_str_isalpha.c
*/

#include "../includes/my.h"

int my_str_isalpha(char const *str)
{
    int index = 0;

    if (!str)
        return 0;
    while (str[index] != '\0') {
        if (!(str[index] >= 'A' && str[index] <= 'Z')
            && !(str[index] >= 'a' && str[index] <= 'z'))
            return 0;
        index++;
    }
    return 1;
}
