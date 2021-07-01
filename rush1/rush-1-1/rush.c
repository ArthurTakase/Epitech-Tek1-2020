/*
** EPITECH PROJECT, 2020
** rush-1-1
** File description:
** print square
*/

#include <unistd.h>

void my_putchar(char c);

// Check si on se trouve dans un angle
int check_corner(int x, int y, int xm, int ym)
{
    if ((xm == 0 && ym == 0) || (xm == x - 1 && ym == y - 1))
	    return 1;
    if ((xm == 0 && ym == y - 1) || (xm == x - 1 && ym == 0))
	    return 1;
    return 0;
}

// Choix de l'élément à afficher
void print_elem(int x, int y, int xm, int ym)
{
    if (check_corner(x, y, xm, ym) == 1){
	    my_putchar('o');
    } else {
	    if (xm == 0 || xm == x - 1){
            my_putchar('|');
        } else if (ym == 0 || ym == y - 1){
            my_putchar('-');
        } else {
            my_putchar(' ');
        }
    }
}

// Création du tableau de X sur Y
void create_tab(int x, int y)
{
    for (int ym = 0; ym != y; ym++) {
        for (int xm = 0; xm != x; xm++)
            print_elem(x, y, xm, ym);
        my_putchar('\n');
    }
}

// Fonction principale
void rush(int x, int y)
{
    if (x <= 0 || y <= 0){
        write(2, "Invalid size\n", 13);
    } else if (x <= 2147483647 || y <= 2147483647){
        create_tab(x, y);
    } else {
        write(2, "Invalid size\n", 13);
    }
}
