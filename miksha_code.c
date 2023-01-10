#include <stdio.h>
#include<string.h>
int main()
{
    int rounds, mwin , cwin;
    cwin = mwin =0;
    scanf("%d",&rounds);
    while(rounds--)
    {
        int miksha, chris;
        scanf("%d %d",&miksha, &chris) ;
        if(miksha > chris)
            mwin ++;

        else if(chris > miksha)
            cwin ++;


    }
    if(mwin == cwin)
        printf("Friendship is magic!^^\n");

    else if( mwin > cwin)
        printf("mishka\n");

    else
        printf("chris\n");



    return 0;
}
