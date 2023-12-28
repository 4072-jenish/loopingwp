#include<stdio.h>

main(){
  
   int i,j,num=1;
   char a='A';
   for(i=1;i<=5;i++){
   	for(j=1;j<=3;j++){
   		printf("%d%c",num++,a++);
   		 
	   }
	  printf("\n"); 
   }

}
