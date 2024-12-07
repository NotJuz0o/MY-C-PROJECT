/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    if (s1 == NULL && s2 == NULL)
        return (0);
    if (s1 == NULL)
        return (-1);
    if (s2 == NULL)
        return (1);
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}
