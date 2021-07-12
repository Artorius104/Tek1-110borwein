/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-110borwein-gilbert.badiabo
** File description:
** main.c
*/

#include "borwein.h"

int main(int ac, char *av[])
{
    save_t *save;

    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        return readme();
    if (check_input(ac, av) == 84)
        return 84;
    save = init_struct(av, save);
    if (save == NULL)
        return 84;
    borwein(save);

    return 0;
}
