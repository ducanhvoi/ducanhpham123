#include <stdio.h>

void main(){
	int ary[10], i;
	for(i=0; i<10 ;i++);{
	    printf("\nenter the number%d :",i+1);
	    scanf("%d", &ary[i]);
	    
   }
     printf("\n!ary[i]:");
   for( i=9; i>=0;){
	printf("\n%d\n", ary[i]);i--;
    }
}
