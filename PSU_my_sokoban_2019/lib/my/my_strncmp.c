/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** same behavior as strcmp for n characters
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int a = 0;
    if (my_strlen(s1) >= my_strlen(s2)){
        while ((s1[i] != '\0' && i < n) && a == 0){
            a = s1[i] - s2[i];
            i++;
        }
    }
    else {
        while ((s2[i] != '\0' && i < n) && a == 0){
            a = s1[i] - s2[i];
            i++;
        }
    }
    return (a);
}