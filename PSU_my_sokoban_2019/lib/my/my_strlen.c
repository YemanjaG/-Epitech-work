/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** returns the number of characters in the string set as parameter
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}
