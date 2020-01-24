/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverses the string set as parameter
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char temp [my_strlen(str)];
    int i = 0;
    int a = my_strlen(str) - 1;
    while (str[i] != '\0'){
        temp[i] = str[i];
        i++;
    }
    i = 0;
    while (str[i] != '\0'){
        str[i] = temp[a];
        a--;
        i++;
    }
    return (str);
}
