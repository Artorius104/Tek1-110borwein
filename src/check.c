/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-110borwein-gilbert.badiabo
** File description:
** check.c
*/

#include "borwein.h"

int check_input(int ac, char **av)
{
    if (ac != 2)
        return 84;
    if (my_str_isnum(av[1]) == 84)
        return 84;
    for (int i = 0; av[1][i] != '\0'; i++)
        if (av[1][i] == '.')
            return 84;
    if (atof(av[1]) < 0)
        return 84;

    return 0;
}