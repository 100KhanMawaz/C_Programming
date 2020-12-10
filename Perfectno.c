main () {
int i,n,f=0;
printf("Enter a no.");
scanf("%d",&n);
for(i=1;i<=n/2;i++) {
if(n%i==0){
f=f+i;
}
}
if(f==n)
printf("The no. is perfect no.");
else {
    printf("The No. is not Perfect");
}
}
