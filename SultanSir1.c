#include<stdio.h>
#include<stdlib.h>
int add(int x, int y) {
int z;
z=x+y;
printf("sum is : %d\n",z);
}
int sub(int x, int y) {
int z;
z=x-y;
printf("sub is : %d\n",z);
}
int multiply(int x, int y) {
int z;
z=x*y;
printf("Product is : %d\n",z);
}
int divide(int x, int y) {
int z;
z=x/y;
printf("Divide is : %d\n",z);
}
void main() {
int choice,a,b;
while(1) {
system("cls");
printf(" 1. Add\n\n 2.Sub\n\n 3.multiple\n\n 4.divide\n\n 5.E.X.I.T\n\n");
printf("Enter Choice\n");
scanf("%d",&choice);
printf("Enter 2 No.\n");
scanf("%d%d",&a,&b);
switch(choice) {
case 1 : add(a,b);
    break;
case 2 : sub(a,b);
    break;
case 3 : multiply(a,b);
    break;
case 4 : divide(a,b);
    break;
case 5 : exit(0);
    break;
default : printf("Invalid choice");
}
getch();
}
}
