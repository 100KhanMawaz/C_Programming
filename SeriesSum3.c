main() {
int n;
float  p,s=0,i,t,f=1,j;
printf("Enter a no to use formual : n^n/n!\n");
scanf("%d",&n);
for(i=1;i<=n;i++) {
p=pow(i,i);
for(j=1;j<=i;j++) {
f=f*j;
}
s=s+p/f;
f=1;
printf("(%f) + ",s);
}
printf(" \n Answer  = (%f)  ",s);
}
