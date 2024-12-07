/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_revstr.c
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    char temp;

    if (!str)
        return NULL;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}
