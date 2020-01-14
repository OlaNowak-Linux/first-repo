#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	
	int a=0;
	float randNum=0;
	if (argc==1)
		printf("\nYou have not entered an amount of numbers.");
	else{
		printf("\nYou have entered %i amount of numbers.", (int)argv[1]);
		for (a = 0;a<10;a++){
			srand(time(NULL));

			randNum=rand();
			printf("\n%d",randNum);
		}
		}
printf("\n");
	return 0;
}
			

