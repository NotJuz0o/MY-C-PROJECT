/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_strcpy.c
*/

#include "../includes/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int index = 0;

    if (!dest || !src)
        return NULL;
    while (src[index]) {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}
