#include<stdlib.h>
void main() {
int n,i,f=0;
while(1) {
system("cls");
printf("Enter a no.\n ");
scanf("%d",&n);
for(i=1;i<=n;i++) {
if (n%i==0)
    f++;
}
    if (f==2)
    printf("prime");
else  printf("not prime");
f=0;
getch();
}
}
