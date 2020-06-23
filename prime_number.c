#include<stdio.h>

//Asal sayý 2 den kendisine kadar olan sayýlardan hiçbirine tam bölünmeyen sayýdýr.
//Kullanýcýdan alýnan deðer asal mi deðil mi?
//Is the value taken from the user prime or not?
//The prime number is the number that is not fully divided into any of the numbers from 2 to it.

int main(){
	
	
    int n;
    int i;
    int count=0;	
	
	printf("Please enter a positive number:");
	scanf("%d",&n);
	

		
	for(i=2;i<n;i++){
			
	    count++;
		
	}
	
	if(count==0){
		printf("Prime number");
	}
	else{
		printf("Not a prime number.");
	}
	
	
	return 0;
}
