#include<stdio.h>
#include<conio.h>
void main() {
int a,b=0,n,i;
printf("Enter a No.\n");
scanf("%d",&n);
for(i=n;i!=0;i=i/10){
a=i%10;
b = b+a; }
printf("Sum of the digits entered is : %d",b);
getch();
}
