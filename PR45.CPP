#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,v;
clrscr();
for(i=5;i>=1;i--){
   for(k=1;k<i;k++){
   printf(" ");
   }
   for(j=i;j<=5;j++){
    printf("%d",j);
   }
   for(v=4;v>=i;v--){
   printf("%d",v);
   }

   printf("\n");
}

getch();
}
