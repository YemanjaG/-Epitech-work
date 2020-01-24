/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** Same behavior as strcmp function
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int a = 0;
    if (my_strlen(s1) >= my_strlen(s2)) {
        while (s1[i] != '\0' && a == 0){
            a = s1[i] - s2[i];
            i++;
        }
    }
    else {
        while (s2[i] != '\0' && a == 0) {
            a = s1[i] - s2[i];
            i++;
        }
    }
    return (a);
}
