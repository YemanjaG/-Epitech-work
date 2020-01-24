/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** concatenates n characters of src into dest
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int a = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[a] != '\0') {
        if (a == nb)
            break;
        dest[i] = src[a];
        a++;
        i++;
    }
    dest[i] = '\0';
    return dest;
}
