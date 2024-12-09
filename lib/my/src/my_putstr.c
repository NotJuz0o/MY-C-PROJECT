/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_putstr.c
*/

#include "../includes/my.h"

int my_putstr(char const *str)
{
    if (!str)
        return FAILURE;
    if (write(1, str, my_strlen(str)) == -1)
        return FAILURE;
    return SUCCESS;
}
