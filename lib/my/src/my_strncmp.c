/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_strncmp.c
*/

#include "../includes/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (n == 0)
        return 0;
    while (n - 1 && *s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
        n--;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}
