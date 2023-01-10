#include <stdio.h>
int main()
{
    int playernum, k, i, o = 0;
    scanf("%d%d", &playernum, &k);
    int playrs[playernum];
    for (i = 0; i < playernum; i++)
    {
        scanf("%d", &playrs[i]);
    }
    for(i=0;i<playernum;i++)
    {
        if(playrs[i]>=playrs[k-1] && playrs[i]!=0)
            o++;
    }
    printf("%d", o);

    return 0;
}