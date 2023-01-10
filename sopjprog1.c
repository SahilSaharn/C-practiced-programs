#include <stdio.h>

int main(void) {
	// your code here
	int ab[100];
	int a,b;
	for(a=0;a<100;a++)
	{
		scanf("%d",&ab[a]);
		if(ab[a]==42){
			break;
		}
	}

	for(a=0;a<100;a++)
	{
		if(ab[a]==42)
		{
			break;
		}
		else{
			printf("%d\n",ab[a]);
		}
		
	}

	return 0;
}