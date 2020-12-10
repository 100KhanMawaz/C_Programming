main() {
int n,i,k,j=0;
printf("Enter a No till where you want prime numbers list\n");
scanf("%d",&n);
for(k=1;k<=n;k++){
for(i=1;i<=k;i++) {
if(k%i==0)
j++;
}
if(j==2)
    printf("%d  ",k);
j=0;
}
}
