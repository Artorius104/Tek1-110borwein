/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-110borwein-gilbert.badiabo
** File description:
** init.c
*/

#include "borwein.h"

save_t *init_struct(char **av, save_t *save)
{
    save = malloc(sizeof(save_t));

    if (save == NULL)
        return NULL;
    save->n = atof(av[1]);
    save->a = 0;
    save->b = 0.5;

    return save;
}