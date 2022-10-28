#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	
	int randArray[16];
	int pos,sum,avg;
	
	srand(time(0));
	
	for(pos=0;pos<15;pos++){
		
		randArray[pos]=rand()%10;
		printf("pos %d = %d\n",pos,randArray[pos]);
		sum+=randArray[pos];
	}
	avg=sum/15;
	for(pos=0;pos<15;pos++){
		
		if(randArray[pos]>avg){
			
			printf("\npos %d = %d > avg(%d)",pos,randArray[pos],avg);	
		}	
	
	}

}

