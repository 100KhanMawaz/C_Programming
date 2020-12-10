#include<stdio.h>
#include<conio.h>
int add(void);
int sub(void); 0
void main() {
printf("%i",add());
printf("%i",sub());

}
int add() {
int a,b,c;
printf("Enter 2 no\n");
scanf("%i%i",&a,&b);
c=a+b;
return(c);
}
int sub() {
int a,b,c;
printf("Enter 2 no\n");
scanf("%i%i",&a,&b);
c=a-b;
return(c);
}
