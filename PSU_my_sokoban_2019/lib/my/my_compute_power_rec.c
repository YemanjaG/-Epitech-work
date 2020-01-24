/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** task02
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    else if (p < 0)
        return 0;
    else if (p > 1)
        nb = nb * my_compute_power_rec(nb, p-1);
    return (nb);
}

