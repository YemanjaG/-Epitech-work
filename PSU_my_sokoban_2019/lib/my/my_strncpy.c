/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** copies a set number of characters from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int taille = 0;
    while (src[taille] != '\0'){
        taille++;
    }
    while (i < n){
        if (i > taille){
            dest[i] = '\0';
            break;
        }
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
