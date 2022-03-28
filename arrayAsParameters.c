#include<stdio.h>

int mltp(int array[],int size){
	
	int a=1;
	for(int j=0;j<size;j++){
		
		a *= array[j];
	}
	
	return a;
	
}



int main(void){
	
	int array[50],size;
	printf("\nPlease enter the size of your array.\n");
	scanf("%d",&size);
	
	for(int j=0;j<size;j++){
		printf("\n%d. ",j+1);
		scanf("%d",&array[j]);
	}
	
	printf("\nThe multiplication of the given numbers is: %d",mltp(array,size));
	
return 0;
}
