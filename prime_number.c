#include<stdio.h>

//Asal say� 2 den kendisine kadar olan say�lardan hi�birine tam b�l�nmeyen say�d�r.
//Kullan�c�dan al�nan de�er asal mi de�il mi?
//Is the value taken from the user prime or not?
//The prime number is the number that is not fully divided into any of the numbers from 2 to it.

int main(){
	
	
	int n;
    int i;
	
	printf("Please enter a positive number:");
	scanf("%d",&n);
	

		
		for(i=2;i<n;i++){
			
			if(n%i==0){
				
		       printf("Not a prime number.");
		       
			}
			else{
				
				printf("Prime number.");
			}
		  
		  break;     
		
	}
	
	
	return 0;
}
