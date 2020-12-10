 void main() {
int n,m,i,f=0,t=0;
printf("Enter 2 Prime no.\n ");
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++) {
if (n%i==0)
    f++;
}
for(i=1;i<=m;i++) {
if (m%i==0)
    t++;
}
    if (f==2&&t==2 ) {
        if ((n-m)== 2 ||(n-m) ==-2)
            {
            printf("Twin Prime");
            }
        else {
            printf("Not Twin Prime");
        }


    }

else  printf("One of the number is not prime");
}
