void main() {
int a,b,n,i,f=0;
printf("Enter 2 no\n");
scanf("%d%d",&a,&b);
n=(a<b)?a:b;
for(i=2;i<=n;i++) {
    if((a%i==0)&&(b%i==0))
        f++; }
        if(f==0)
            printf("Co-prime");
        else
            printf("Not co-prime");

}

