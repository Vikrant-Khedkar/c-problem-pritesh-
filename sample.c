//Expected Output -10 -12 -14 -18 -26 -42    
//Differnece 2 4 8 16

#include<stdio.h>
#include<conio.h>

int hello(){
    printf("HELLO!!");
    return 0;
}

int main(){
   int x=-2,y=-1,number=-10,i;
  
   printf("%d \n",number);
   
   for(i=0;i<5;i++){
          
       number = number + x;
       printf("%d \n",number);
       x=y*2;
       y=x;
    
   }int answer;
 
   hello();
   return 0;
}





        

