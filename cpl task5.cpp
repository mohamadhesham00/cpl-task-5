#include<stdio.h>
void reverse (char msg[30]){
		int i;
		for (i=30;i>=0;i--){
			printf("%c",msg[i]);
	
	}
	}


int main (){

	char msg[30];
	printf("Enter a string: ");
	fgets(msg,30,stdin);
 	reverse (msg);
 	return 0;
 }

	
	
