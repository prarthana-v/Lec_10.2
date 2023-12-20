#include<stdio.h>

int length(){
	
	char str[100];
	
	printf("Enter string : ");
	scanf("%s",&str);
	
	int len=0,i;
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	return len;
}
void main(){

	printf("Length of string: %d",length());
	
}
