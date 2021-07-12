/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-110borwein-gilbert.badiabo
** File description:
** borwein.h
*/

#ifndef BORWEIN_H_
#define BORWEIN_H_

#include <stdio.h>
#include <math.h>
#include "my.h"
#include "structure.h"

int readme(void);
int check_input(int ac, char **av);
save_t *init_struct(char **av, save_t *save);
double get_diff(double res);
void borwein(save_t *save);
double calc(double n, double n_sec);
void do_midpoint(save_t *save);
void do_trapezoidal(save_t *save);
void do_simpson(save_t *save);
void display_midpoint(double res, double diff, save_t *save);
void display_trapezoidal(double res, double diff, save_t *save);

#endif
