#include<stdio.h>

main(){
  
   int i,j,num=1;
   char a='A';
   for(i=1;i<=5;i++){
   	for(j=1;j<=3;j++){
   		if(i%2==0){
   			printf("**",a++);
		   }else{
		   	printf("*#",num);
		   }
   		
	   }
	  printf("\n"); 
   }

}
