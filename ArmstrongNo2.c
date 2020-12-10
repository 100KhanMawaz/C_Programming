#include<stdio.h>
main() {
int i,j,f=0,k,t,a,s=0;
for(i=1;i<=1000;i++) {
        s=0;
        t=i;
        while(t>0) {
        a=t%10;
        s=s+(a*a*a);
        t=t/10;
        }

        if(s==i)
        printf("%d  ",i);

            }
}

