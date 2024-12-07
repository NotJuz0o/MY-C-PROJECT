/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_strstr.c
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int index = 0;
    int size = 0;
    int len = my_strlen(to_find);

    while (str[index + size] != '\0') {
        if (str[index + size] != to_find[size]) {
            size = 0;
            index++;
        }
        if (str[index + size] == to_find[size])
            size++;
        if (size == len)
            return &str[index];
    }
    return NULL;
}
