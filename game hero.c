#include <stdio.h>

struct hero5{

    int power;
    int attack;
    int defense;

};

void in()
 {
     int i,n;
     struct hero5 hero[2];
     char z[2],y[2];
     int a,b,f;
     printf("\n\nMULAI GAME\n\n");
     getch();

     n:
     printf("\nPilih Hero\n");
     for(i=0; i<2; i++)
    {
        fflush(stdin);
        if(i==0)
            printf("\n %d.) Hero Attacker :  ",i+1);
        else
            printf("\n %d.) Hero Defender :  ",i+1);
            scanf("%c",&z[i]);

        if(z[i]=='a')
        {
            hero[i].power=200;
            hero[i].attack=50;
            hero[i].defense=30;
        }
        else if(z[i]=='b')
        {
            hero[i].power=200;
            hero[i].attack=20;
            hero[i].defense=40;
        }
        else if(z[i]=='c')
        {
            hero[i].power=200;
            hero[i].attack=70;
            hero[i].defense=10;
        }
        else if(z[i]=='d')
        {
            hero[i].power=200;
            hero[i].attack=40;
            hero[i].defense=20;
        }
        else if(z[i]=='e')
        {
            hero[i].power=200;
            hero[i].attack=10;
            hero[i].defense=90;
        }
        else
        {
            printf("\nPilihan Hanya Sampai E\n");
            getch();
            goto n;
            system("cls");
        }
    }
        do
        {

            printf("\nPilih Action : ");
            printf("\n Attack (a) \n Defense (d)\n\n");

            for(b=0; b<2; b++)
            {
                fflush(stdin);
                if(b==0)
                    printf("Hero Attacker %c : ",z[b]);
                else
                    printf("Hero Defender %c : ",z[b]);
                scanf("%c",&y[b]);
                hero[b].power = hero[b].power - 10;
            }
        if((y[0]=='a'||y[0]=='A') && (y[1]=='d'||y[1]=='D'))
        {
            f = hero[1].defense - hero[0].attack;
            if(f<0)
                hero[1].power += f;
            else
                hero[0].power -= f;
        }

        else if ((y[0]=='d'||y[0]=='D') && (y[1]=='a'||y[1]=='A'))
        {
            f = hero[0].defense - hero[1].attack;
            if(f<0)
                hero[0].power +=f;
            else
                hero[1].power -=f;
        }
        printf("\nPower Hero Attacker %c : %d ",z[0],hero[0].power);
        printf("\nPower Hero Defender %c : %d ",z[1],hero[1].power);
        printf("\n\n");


    }while(hero[0].power >0 && hero[1].power >0);

    if(hero[0].power > hero[1].power)
    {
        printf("HERO ATTACKER %c MENANG !!!!",z[0]);
        getch();
        keluar();
    }
    else if(hero[1].power > hero[0].power)
    {
        printf("HERO DEFENDER %c MENANG !!!!",z[1]);
        getch();
        keluar();
    }
        else
        printf("DRAW");
}

 int keluar()
 {
     system("cls");
     printf("\t\t__________________");
     printf("\n\t\tTHANKS FOR PLAY...");
     printf("\n\t\t------------------");
     getch();
     exit(0);
 }

int main ()
{

    printf("\t\t|__HERO____|  A  ||  B  ||  C  ||  D  ||  E  |\n");
    printf("\t\t|  POWER   | 200 || 200 || 200 || 200 || 200 |\n");
    printf("\t\t|  ATTACK  | 50  || 20  || 70  || 40  || 10  |\n");
    printf("\t\t|  DEFENSE | 30  || 40  || 10  || 20  || 90  |\n\n");

    int pil1;

    printf(" 1. Mulai\n");
    printf(" 2. Exit");
    printf("\nMasukan Pilihan : ");
    scanf("%d",&pil1);


    if(pil1==1)
    {
        in();
    }
    else if(pil1==2)
    {

        keluar();
        return 0;
    }
    else
    printf("Pilihan Hanya 2...");
    getch();
    system("cls");
    main();
}
