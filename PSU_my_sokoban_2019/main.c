/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** My_sokoban
*/

#include "include/my.h"
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

char **buff_to_tab(char *str)
{
    char **tab = malloc(sizeof(char) * 1000000000);
    int ligne = 0;
    int colonne = 0;
    int i = 0;
    for (ligne; str[i]!= '\0'; ligne++, i++){
        tab[ligne] = malloc(sizeof(char) * 10000000);
        for (colonne; str[i] != '\n'; colonne++, i++){
            tab[ligne][colonne] = str[i];
        }
        tab[ligne][colonne] = str[i];
        colonne = 0;
    }
    return tab;
}

char **modify_tab_p(char **tab, int *coordp, int objcount, int* objpos)
{
    char **ret = malloc(sizeof(char) * 1000000000);
    int ok = objcount * 2;
    for (int i = 0; tab[i] != NULL; i++){
        for (int a = 0; tab[i][a] != '\0'; a++){
            if (tab[i][a] == 'P')
                tab[i][a] = ' ';
        }
    }for (int i = 0; tab[i] != NULL; i++){
        ret[i] = malloc(sizeof(char) * 1000000);
        for (int a = 0; tab[i][a] != '\0'; a++){
            ret[i][a] = tab[i][a];
            if (i == coordp[0] && a == coordp[1])
                ret[i][a] = 'P';
        }
    }for (int a = 0; a < ok; a++){
        if (ret[objpos[a]][objpos[a + 1]] == ' ')
            ret[objpos[a]][objpos[a + 1]] = 'O';
        a++;
    }
    return ret;
}

void my_switch(char **tab, int *coordp, int ac, char **av)
{
    switch (getch()){
    case KEY_RIGHT:
        case_right(tab, coordp);
        break;
    case KEY_LEFT:
        case_left(tab, coordp);
        break;
    case KEY_UP:
        case_up(tab, coordp);
        break;
    case KEY_DOWN:
        case_down(tab, coordp);
        break;
    case KEY_BACKSPACE:
        clear_refresh();
        exit(1);
    case ' ':
        clear_refresh();
        main(ac, av);
        break;
    default:
        break;
    }
    clear();
}

void game_loop(char **tab, int ac, char** av)
{
    int *coordp = malloc(sizeof(int) * 10);
    int *coordc = malloc(sizeof(int) * 10);
    int nobj = objective_count(tab);
    int *pos_obj = malloc(sizeof(int) * nobj * 10 + 2);
    coordp = find_player(tab);
    pos_obj = objective_pos(tab, nobj);
    while (1){
        tab = modify_tab_p(tab, coordp, nobj, pos_obj);
        for (int i = 0; tab[i] != NULL; i++)
            printw("%s", tab[i]);
        coordp = find_player(tab);
        coordc = find_coordc(tab, coordp);
        do_i_fit(tab);
        refresh();
        my_switch(tab, coordp, ac, av);
        if (check_win(tab, pos_obj, nobj) == 1)
            break;
    }
}

int main(int ac, char **av)
{
    char** tab = malloc(sizeof(char*) * 10000000);
    char *buffer = malloc(sizeof(char) * 10000000);
    if (handle_it(ac, av, 1) != 1)
        return handle_it(ac, av, 2);
    int fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return 84;
    int x = read(fd, buffer, 100000001);
    tab = buff_to_tab(buffer);
    if (error_gestion(ac, av, tab) != 0)
        return 84;
    initscr();
    do_i_fit(tab);
    keypad(stdscr, TRUE);
    game_loop(tab, ac, av);
    endwin();
    return 0;
}