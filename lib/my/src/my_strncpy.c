/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_strncpy.c
*/

#include "../includes/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int index = -1;

    if (!dest || !src)
        return NULL;
    while (src[index] && index < n) {
        dest[index] = src[index];
        index++;
    }
    return dest;
}
