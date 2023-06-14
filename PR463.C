/*
    *****        1
  **     **      2
 **       **     3
 **       **     4
  **  ** **      5
    *****        6
	 **      7
	  **     8
 */
#include<stdio.h>
#include<conio.h>

void main(){
int i;
clrscr();
for(i=1;i<=8;i++){
 if(i==1 || i==6 ){
 printf("   *****  \n");
 }else if(i==2){
 printf(" **     **\n");
 }else if(i==3 || i==4){
 printf("**       **\n");
 }else if(i==5){
 printf(" **  ** **\n");
 }else if(i==7){
 printf("	**\n");
 }else{
 printf("	 **\n");
 }

}
getch();
}