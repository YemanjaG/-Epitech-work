/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int a = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[a] != '\0') {
        dest[i] = src[a];
        a++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
