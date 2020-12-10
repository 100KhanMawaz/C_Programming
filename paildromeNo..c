main() {int n,a,b=0,i;printf("Enter 2 No");scanf("%d",&n);for(i=n;i!=0;i=i/10) {a=i%10;b=b*10+a;}(n==b)?printf("Yeah Paildrome : %d",b):printf("Not paildrome baby");}


