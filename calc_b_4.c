#include<stdio.h>
#include<math.h>
#include<string.h>
char s[100];
int convertEnter();
void menu();
int choixshd;
int main()
{
    char Res[100],x[100];
    int i,j,ResDec,l,ResShd[100],n1,n2;
    menu();
    if((choixshd<6)&&(choixshd>0))
    {
        rn1 : printf("Entrer le premier nombre :\t");
        n1=convertEnter();
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            x[i]=s[i];
        }
        rn2 : printf("Entrer le deuxiem nombre :\t");
        n2=convertEnter();
        for(i=0;i<l;i++)
            printf("%c",x[i]);
        if(choixshd==1)
        {
            ResDec=n1+n2;
            printf(" Add %s = ",s);
            if(ResDec==0)
                printf("GA");
        }
        else if(choixshd==2)
        {
            ResDec=n1-n2;
            printf(" Sou %s = ",s);
            if(ResDec==0)
                printf("GA");
        }
        else if(choixshd==3)
        {
            ResDec=n1*n2;
            printf(" Mul %s = ",s);
            if(ResDec==0)
                printf("GA");
        }
        else if(choixshd==4)
        {
            if(n2==0)
            {
                printf("Erreur de division sur 0\n");
                goto rn2;
            }
            ResDec=n1/n2;
            printf(" Div %s = ",s);
            if(ResDec==0)
                printf("GA");
        }
        else
        {
            if(n2==0)
            {
                printf("Erreur de division sur 0\n");
                goto rn2;
            }
            ResDec=n1%n2;
            printf(" Mod %s = ",s);
            if(ResDec==0)
                printf("GA");
        }
        // conversion de ruseltat de decimal au shadock
        i=0;
        if(ResDec<0)
        {
            printf("-");
            ResDec*=(-1);
        }
        while(ResDec!=0)
        {
            ResShd[i]=ResDec%4;
            ResDec=ResDec/4;
            i++;
        }
        l=i-1;
        /*for(i=l;0<=i;i--)
        {
            printf("%d",ResShd[i]);
        }*/
        //printf(" = ");
        for(i=l;0<=i;i--)
        {
            switch(ResShd[i])
            {
                case 0:strcpy(Res,"GA");break;
                case 1:strcpy(Res,"BU");break;
                case 2:strcpy(Res,"ZO");break;
                case 3:strcpy(Res,"MEU");break;
            }
            printf("%s",Res);
        }
        fin : printf("\n");
    }
    else if(choixshd==6)
    {
        rsn : printf("Entrer nombre en shadock:\t");
        printf("Con %s = %d",s,convertEnter());
    }
}
int convertEnter()//Donner l'entrer et convetir au dicemal
{
	int i,l,j,ns[100],num[100],n1d=0;
	re : scanf("%s",s);
	l=strlen(s);
	j=0;
	for(i=0;i<l;i++)
    {
        if(s[i]=='G')
        {
            if(s[i+1]='A')
            {
                ns[j]=0;
                i+=1;
            }
            else
            {
                goto re;
            }
        }
        else if(s[i]=='B')
        {
            if(s[i+1]='U')
            {
                ns[j]=1;
                i+=1;
            }
            else
            {
                goto re;
            }
        }
        else if(s[i]=='Z')
        {
            if(s[i+1]='O')
            {
                ns[j]=2;
                i+=1;
            }
            else
            {
                goto re;
            }
        }
        else if(s[i]=='M')
        {
            if((s[i+1]='E')&&(s[i+2]='U'))
            {
                ns[j]=3;
                i+=2;
            }
            else
            {
                goto re;
            }
        }
        else
            {
                goto re;
            }
        //printf("%d",ns[j]);
        j+=1;
    }
    fin:i=pow(4,(j-1));
    l=j;
    for(j=0;j<l;j++)
        {
            num[j]=(ns[j])*i;
            //printf("Con %d = %d\n",ns[j],num[j]);
            i/=4;
            n1d+=num[j];
        }
        //printf("Con %s = %d\n",s,n1d);
        return n1d;
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
    rmsd : scanf("%d",&choixshd);
    if((choixshd>6)||(choixshd<1))
    {
        printf("Entrer un nombre entre 1 et 6:\t");
        goto rmsd;
    }
}
