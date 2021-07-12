/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-110borwein-gilbert.badiabo
** File description:
** borwein.c
*/

#include "borwein.h"
#include <math.h>

void borwein(save_t *save)
{
    do_midpoint(save);
    save->a = 0;
    save->b = 0.5;
    do_trapezoidal(save);
    save->a = 0;
    save->b = 0.5;
    do_simpson(save);
}

double calc(double n, double m)
{
    double res = 0;

    if (m == 0)
        return 1;
    for (int i = 0; i <= n; i++) {
        if (i == 0)
            res = sin(m / ((2 * i) + 1)) / (m / ((2 * i) + 1));
        else
            res *= sin(m / ((2 * i) + 1)) / (m / ((2 * i) + 1));
    }
    return res;
}

void do_midpoint(save_t *save)
{
    double tmp = 0;
    double res = 0;
    double diff = 0;

    while (save->b <= 5000) {
        tmp = calc(save->n, ((save->a + save->b) / 2));
        tmp = (save->b - save->a) * tmp;
        res = tmp + res;
        save->a += 0.5;
        save->b += 0.5;
    }
    diff = get_diff(res);
    display_midpoint(res, diff, save);
}

void do_trapezoidal(save_t *save)
{
    double tmp = 0;
    double res = 0;
    double diff = 0;

    while (save->b <= 5000) {
        tmp = calc(save->n, save->a) + calc(save->n, save->b);
        tmp = ((save->b - save->a) / 2) * tmp;
        res = tmp + res;
        save->a += 0.5;
        save->b += 0.5;
    }
    diff = get_diff(res);
    display_trapezoidal(res, diff, save);
}

void do_simpson(save_t *save)
{
    double tmp = 0;
    double res = 0;
    double diff = 0;

    while (save->b <= 5000) {
        tmp = (calc(save->n, save->a) + calc(save->n, save->b))
        + (4 * calc(save->n, (save->a + save->b) / 2));
        tmp = ((save->b - save->a) / 6) * tmp;
        res = tmp + res;
        save->a += 0.5;
        save->b += 0.5;
    }
    diff = get_diff(res);
    display_simpson(res, diff, save);
}