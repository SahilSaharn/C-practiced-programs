#include<stdio.h>
int main()
{
    int test;
    char a;
    scanf("%d",&test);
    while(test)
    {
        scanf("\n%c",&a);
        if(a=='b'||a=='B'){printf("BattleShip\n");}
        else if(a=='C'||a=='c'){printf("Cruiser\n");}
        else if(a=='d'||a=='D'){printf("Destroyer\n");}
        else if(a=='f'||a=='F'){printf("Frigate\n");}
        test--;
    }
    return 0;
}