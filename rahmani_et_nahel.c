/*  1er ETUDIANT
        NOM :    RAHMANI
        PRENOM : ABD EL KADER SEIF EL ISLEM
        GROUPE : 2
    2em ETUDIANT
        NOM :    NAHEL
        PRENOM : MOHAMED FETH ALLAH
        GROUPE : 2

*/
#include<stdio.h>
void menu1();
int main()
{
    int exit;
    con : menu1();
    printf("\nVoulez vous continuez[1=oui/0=non]\t");
    quitter : scanf("%d",&exit);
    if(exit==1)
        goto con;
    else if(exit==0)
        printf("Merci d'etre pass%c\n",130);
    else
    {
        printf("Erreur :\n Entrer un nombre entre 0 et 1 \t");
        goto quitter;
    }
}
void menu1()
{
    int choixmenu;
    printf("*************************CALCULATRICE*************************\n");
    printf("*1: - - - - - - - - - - > Base Dix        - - - - - - - - - -*\n");
    printf("*2: - - - - - - - - - - > Base Sadock     - - - - - - - - - -*\n");
    printf("**************************************************************\n");
    printf("Donner votre choix ?\t");
    rchm : scanf("%d",&choixmenu);
    if(choixmenu==1)
    {
        system("calc_b_10.exe");//pour exuceter la calculatrice de base 10
    }
    else if(choixmenu==2)
    {
        system("calc_b_4.exe");//pour exuceter la calculatrice de base shadock
    }
    else
    {
        printf("Erreur :\n Entrer un nombre entre 1 et 2 \t");
        goto rchm;
    }
}
