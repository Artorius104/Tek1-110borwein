/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-110borwein-gilbert.badiabo
** File description:
** get.c
*/

#include "borwein.h"

double get_diff(double res)
{
    double diff = res - M_PI / 2;

    if (diff >= 0)
        return diff;
    else
        diff = diff * - 1;
    return diff;
}