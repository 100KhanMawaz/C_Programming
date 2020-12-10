main() {
int n,i,j,s=0,a=0;
scanf("%d",&n);
for(i=1;i<=n;i++) {
for(j=1;j<=i;j++){
s+=j;
}
a+=s;
s=0;
}
printf("=%d",a);
a=0;
}
