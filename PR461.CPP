/*
 * * * * *      1
 *	  *     2
 *	  *     3
 * * * * *      4
 *        *     5
 *        *     6
 * * * * *      7
*/
#include<stdio.h>
#include<conio.h>

void main(){
int i,j;
clrscr();
for(i=1;i<=7;i++){
   if(i==1 || i==4 || i==7 ){
      printf("* * * * *\n");
   }else{
   printf("*        *\n");
    }
}

getch();
}