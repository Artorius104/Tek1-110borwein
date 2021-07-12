/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-110borwein-gilbert.badiabo
** File description:
** readme.c
*/

#include "borwein.h"

int readme(void)
{
    write(1, "USAGE\n", 7);
    write(1, "    ./110borwein n\n\n", 21);
    write(1, "DESCRIPTION\n", 13);
    write(1, "    n   constant defining the integral to be computed\n", 55);

    return 0;
}