/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-110borwein-gilbert.badiabo
** File description:
** display.c
*/

#include "borwein.h"

void display_midpoint(double res, double diff, save_t *save)
{
    printf("Midpoint:\n");
    printf("I%.0f = %.10f\n", save->n, res);
    printf("diff = %.10f\n\n", diff);
}

void display_trapezoidal(double res, double diff, save_t *save)
{
    printf("Trapezoidal:\n");
    printf("I%.0f = %.10f\n", save->n, res);
    printf("diff = %.10f\n\n", diff);
}

void display_simpson(double res, double diff, save_t *save)
{
    printf("Simpson:\n");
    printf("I%.0f = %.10f\n", save->n, res);
    printf("diff = %.10f\n\n", diff);
}