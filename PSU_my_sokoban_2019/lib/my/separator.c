/*
** EPITECH PROJECT, 2019
** separator.c
** File description:
** checks if str[i] is alphanumeric or not
*/

int separator(char c)
{
    if (c >= 97 && c <= 122)
        return 0;
    else if (c >= 65 && c <= 90)
        return 0;
    else if (c >= 49 && c <= 57)
        return 0;
    else
        return 1;
}
