/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** sorts integer array in ascending order
*/

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int temp = 0;
    int a = array[1];
    int index_a = 0;
    for (i = 0; i < size; i++) {
        if (array[i] < a) {
            a = array[i];
            index_a = i;
        }
    }
    array[index_a] = array[0];
    array[0] = a;
    for (i = 0; i< size; i++) {
        if (array[i] > array [i + 1]) {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            i = 0;
        }
    }
}

