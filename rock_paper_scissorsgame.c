#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int rounds=3,user_pick,comp,user_win=0,comp_win=0,tie_breaker=3;
    srand(time(NULL));
    printf("\t\t\t\t\t***** W-E-L-C-O-M-E *****\n\n\n");
    for(int i=1 ; i<=3 ; i++)
    {
        printf("\t\t\t\t\t   -----ROUND : %d -----\n",i);
        printf("pick a number corresponds to:-\n[0]- for ROCK\n[1]- for PAPER\n[2]- for SCISSORS\n");
        printf("enter your CHOICE :");
        scanf("%d",&user_pick);
        printf("\n");

        comp = rand() % 3;  // this is the pick of commputer 

        if(user_pick == comp){
            printf("\t\t\t\t\t\t\t\t\tROUND %d RESULT :- T-I-E. \n",i);
        }
        else if(user_pick == 0 && comp == 1){
            printf("YOUR PICK = ROCK.\nCOMPUTER PICK = PAPER.\n");
            printf("\t\t\t\t\t\t\t\t\tROUND %d RESULT :- YOU LOSE! \n",i);
            comp_win++;
        }
        else if(user_pick == 0 && comp == 2){
            printf("YOUR PICK = ROCK.\nCOMPUTER PICK = SCISSORS.\n");
            printf("\t\t\t\t\t\t\t\t\tROUND %d RESULT :- YOU WIN :) \n",i);
            user_win++;
        }
        else if(user_pick == 1 && comp == 0){
            printf("YOUR PICK = PAPER.\nCOMPUTER PICK = ROCK.\n");
            printf("\t\t\t\t\t\t\t\t\tROUND %d RESULT :- YOU WIN :) \n",i);
            user_win++;
        }
        else if(user_pick == 1 && comp == 2){
            printf("YOUR PICK = PAPER.\nCOMPUTER PICK = SCISSORS.\n");
            printf("\t\t\t\t\t\t\t\t\tROUND %d RESULT :- YOU LOSE! \n",i);
            comp_win++;
        }
        else if(user_pick == 2 && comp == 0){
            printf("YOUR PICK = SCISSORS.\nCOMPUTER PICK = ROCK.\n");
            printf("\t\t\t\t\t\t\t\t\tROUND %d RESULT :- YOU LOSE! \n",i);
            comp_win++;
        }
        else if(user_pick == 2 && comp == 1){
            printf("YOUR PICK = SCISSORS.\nCOMPUTER PICK = PAPER.\n");
            printf("\t\t\t\t\t\t\t\t\tROUND %d RESULT :- YOU WIN :) \n",i);
            user_win++;
        }

    }
    printf("\t\t\t\t\t-----FINAL RESULT!-----\n");
    if(user_win == comp_win){
        printf("\t\t\t\t\t    GAME IS TIE! \n");
    }
    else if(user_win > comp_win){
        printf("\t\t\t\t\t   YOU WON THE GAME!\n");
    }
    else{
        printf("\t\t\t\t\tBAD LUCK TRY NEXT TIME!\n");
    }
    printf("\t\t\t\t\t--BYE HAVE A NICE DAY--\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t     credits:- sahil saharn.\n");

    return 0;
}
//completed...