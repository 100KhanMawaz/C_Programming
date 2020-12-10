#include<stdio.h>
#include<conio.h>
void main() {
int n,i,j,a,s=0;
printf("Enter a no till where you want paildrome list");
scanf("%d",&n);
for(i=1;i<=n;i++){
s=0;
a=0;
for(j=i;j>0;j=j/10) {
a=j%10;
s=s*10+a;
}
if(s==i)
printf("%d ",i);
}
}
