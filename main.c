#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	int cnt=0, input;
	int answer =70 ;
	
	
	
	do
	{
		printf (" Guess a number : ");
		scanf("%d", &input);
		
		if(input<answer)
		{
			printf("low!\n");
		}
		
		else if(input>answer)
		printf("high!\n");
		
	cnt++;
		
	}while(input !=answer);

	printf("Congratulation. trial : %d\n.", cnt);
	return 0;
}
