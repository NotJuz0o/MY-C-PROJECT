/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_strlen.c
*/

#include "../includes/my.h"

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return count;
}
