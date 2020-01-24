/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** displays the number given as parameter
*/

#include <unistd.h>
#include <stdio.h>

int my_putchar(char c);

int my_put_nbr(int nb)
{
    int temp = 0;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10) {
        temp = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(temp + 48);
    }
    else {
        my_putchar(nb + 48);
    }
    return 0;
}