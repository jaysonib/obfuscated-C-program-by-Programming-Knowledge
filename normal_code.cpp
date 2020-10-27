#include<stdio.h>
#include<conio.h>

int q(int a , int b) { 
	int i , t=1 ;
 	for(i=0;i<b;i ++)
		t *= a ;
	return t; 
}
void main() {
	clrscr(); int a , b ; 
	scanf("%d",&a);
	scanf("%d",&b); 
	printf("%d",q(a , b));
	getch(); 
}