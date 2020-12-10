#include<stdio.h>
#include<conio.h>
void main() {
int n,i,s=0;
printf("Enter a no till where you want paildrome list");
scanf("%d",&n);
for(i=1;i<=n;i++) {
    s=s+i;
printf("%d + ",i);
}
printf("sum = %d ",s);
}
