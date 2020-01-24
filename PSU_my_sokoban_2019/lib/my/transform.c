/*
** EPITECH PROJECT, 2019
** transform.c
** File description:
** transforms a string into an int
*/

int transform(char const *str)
{
    int i = 0;
    int ret = 0;
    int isneg = 0;
    if (str[0] == '-'){
        i++;
        isneg++;
    }
    while (str[i] != '\0'){
        ret = ret * 10 + str[i] - 48;
        i++;
    }
    if (isneg != 0)
        return -ret;
    return ret;
}
