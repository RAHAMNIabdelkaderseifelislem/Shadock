#include<stdio.h>
#include<math.h>
#include<string.h>
int choixdec,n1,n2;
void menu();
void entrerop();
int main()
{
    int decimalnumber,r,rd;
    int shadocknumber;
    menu();
    if(choixdec==1){
        entrerop();
        r=n1+n2;
        printf("%d Add %d = %d",n1,n2,r);
    }
    else if(choixdec==2){
        entrerop();
        r=n1-n2;
        printf("%d Sou %d = %d",n1,n2,r);
    }
    else if(choixdec==3){
        entrerop();
        r=n1*n2;
        printf("%d Mul %d = %d",n1,n2,r);
    }
    else if(choixdec==4){
        entrerop();
        if(n2==0){
            printf("Erreur de division sur 0");
        }
        else{
            rd=n1/n2;
            printf("%d Div %d = %d",n1,n2,rd);
        }
    }
    else if(choixdec==5){
        entrerop();
        if(n2==0){
            printf("Erreur de division sur 0");
        }
        else{
            rd=n1%n2;
            printf("%d Mod %d = %.0d",n1,n2,rd);
        }
    }
    else if(choixdec==6){
        int i,l,s,se[100];
        char c[5]={""};
        printf("\nEntrer votre nombre en decimal:\t");
        scanf("%d",&s);
        printf("Con %d = ",s);
        // conversion au shadock
        i=0;
        if(s<0)
        {
            printf("-");
            s=s*(-1);
        }
        if(s==0)
        {
            printf("GA");
        }
        while(s!=0)
        {
            se[i]=s%4;
            s=s/4;
            i++;
        }
        l=i-1;
        /*for(i=l;0<=i;i--)
        {
            printf("%d",se[i]);
        }
        printf(" = ");*/
        for(i=l;0<=i;i--)
        {
            switch(se[i])
            {
                case 0:strcpy(c,"GA");break;
                case 1:strcpy(c,"BU");break;
                case 2:strcpy(c,"ZO");break;
                case 3:strcpy(c,"MEU");break;
            }
            printf("%s",c);
        }
    }
    return 0 ;
}
void menu()
{
    printf("***************************OPERATION**************************\n");
    printf("*1: - - - - - - - - - - - - - > Add - - - - - - - - - - - - -*\n");
    printf("*2: - - - - - - - - - - - - - > Sou - - - - - - - - - - - - -*\n");
    printf("*3: - - - - - - - - - - - - - > Mul - - - - - - - - - - - - -*\n");
    printf("*4: - - - - - - - - - - - - - > Div - - - - - - - - - - - - -*\n");
    printf("*5: - - - - - - - - - - - - - > Mod - - - - - - - - - - - - -*\n");
    printf("*6: - - - - - - - - - - - - - > Con - - - - - - - - - - - - -*\n");
    printf("**************************************************************\n");
    printf("Donner votre choix ?\t");
    rmd : scanf("%d",&choixdec);
    if((choixdec<1)||(choixdec>6))
    {
        printf("Erreur :\n entrer un nombre entier entre 1 et 6\t");
        goto rmd;
    }
}
void entrerop()
{
    printf("Entrer le premier nombre :\t");
    scanf("%d",&n1);
    printf("Entrer le deuxiem nombre :\t");
    scanf("%d",&n2);
}
