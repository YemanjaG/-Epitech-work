/*
** EPITECH PROJECT, 2019
** set_sign
** File description:
** checks "+" and "-" and sets the sign
*/

int set_sign(char const *str)
{
    int i = 0;
    int neg = 0;
    while (str[i] < 48 || str[i] > 57) {
        if (str[i] == 45){
            neg++;
        }
        i++;
    }
    if (neg%2 ==0) {
        return 1;
    }
    else if (neg%2 != 0) {
        return -1;
    }
}
