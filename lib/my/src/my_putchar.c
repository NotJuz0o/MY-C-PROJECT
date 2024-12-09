/*
** EPITECH PROJECT, 2024
** juzoo
** File description:
** my_putchar.c
*/

#include "../includes/my.h"

int my_putchar(int c)
{
    if (write(1, &c, 1) == -1)
        return FAILURE;
    return (unsigned char)c;
}
