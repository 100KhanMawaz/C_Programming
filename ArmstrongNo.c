#include<math.h>
void main() {
int b=0,n,i;
float s=0;

printf("Enter a No.\n");
scanf("%d",&n);
for(i=n;i>0;i=i/10)
b++;
for(i=n;i>0;i=i/10){
    s = s + pow(i%10,b);
    printf("%f ",s);
}

if(n==s)
printf("The No. Is Armstrong No.");
else printf("The No. is Not Armstrong");

}
