/*
** EPITECH PROJECT, 2025
** game_box
** File description:
** game_box
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

void game_plan(void)
{
    system("clear");
    printf("🫰🥰->BIENVENUE DANS MA GAMEBOX MON/MA PETIT(E)<-🥰🫰\n");
    printf("\033[0;33m========================================>\n");
    printf("\033[34;01m🥵1- :Janken(Pierre[👊], Feuille[🫳], Ciseaux[✌️])\n");
    printf("❓2- :Devine le nombre⚜️\n");
    printf("🎮3- :Nim Game(Jeu de Batonnet)🎮\n");
    printf("🏀4- :Regles de chaques JEUX🏀\n");
    printf("\033[0;33m========================================>\n");
    printf("\033[0;37m💠5- :EXIT💠\n");
}

int janken(void)
{
    system("clear");
     srand(time(NULL));
    while(1) {
        int a = rand() % 3;
        int nb;
    
        printf ("\n0- pierre\n");
        printf ("1- papier\n");
        printf ("2- ciseaux\n");
        printf("entre ton choix: ");
        scanf ("%d", &nb);
        if (a == 0 && nb == 1) {
            printf("\nl'ordi choisit pierre\n");
            printf("\ntu as gagne mon petit\n");
        } else if (a == 1 && nb == 0) {
            printf("\nl'ordi choisit papier\n");
            printf("\ntu as perdu mon petit\n");
        }
        if (a == 2 && nb == 1) {
            printf("\nl'ordi choisit ciseaux\n");
            printf("\ntu as perdu\n");
        } else if (a == 1 && nb == 2) {
            printf("\nl'ordi choisit papier\n");
            printf("\ntu as gagne mon petit\n");
        }
        if (a == 0 && nb == 2) {
            printf("\nl'ordi choisit pierre\n");
            printf("\ntu as perdu mon petit\n");
        } else if (a == 2 && nb == 0) {
            printf("\nl'ordi choisit papier\n");
            printf("\ntu as gagne mon petit\n");
        }
        if (nb < 0 || nb > 2) {
            printf ("erreur\n");
        }
        if (a == nb) {
            printf("egalite\n");
        }
        if (a == 3) {
            return 0;
        }
    }
}
int devine(void)
{
    system("clear");
    srand(time(NULL));
    printf("entre 101 pour abandonner\n");
    while(true) {
        int a = rand() % 101;
        int nb;
        while(true) {
            printf ("entre ton nombre:");
            scanf("%d", &nb);
            if (a > nb) {
                printf("trop bas\n");
            }
            if (a < nb && nb < 101) {
                printf("trop haut\n");
            }
            if (a == nb) {
                printf("\nvoila mon petit = %d\n", a);
            }
            if (nb == 101) {
                printf("%d\n", a);
                return 0;
            } else if (nb > 101) {
                printf("toi aussi ,kan on te parle ecoute\n");
            } else {
                //return 0;
            }
        }
    }
}

char nim_game(void)
{
    system("clear");
    return 0;
}

char regles(void)
{
    system("clear");
    return 0;
}

char arret(void)
{
    printf ("AU REVOIR\n");
    return 0;
}

int main(void)
{
    int i;
    while (1) { 
        game_plan();
        printf ("tu veux faire quoi😮 :");
        scanf("%d", &i);
        if (i == 1) {
            janken();
        }
        if (i == 2) {
            devine();
        }
        if (i == 3) {
            nim_game();
        }
        if (i == 4) {
            regles();
        }
        if (i == 5) {
            arret();
            return 0;
        }
    }
}
