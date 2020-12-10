void main () {
int n,i,j=0,k=1;
printf("Enter a No to Check whether the number is special or not\n\n");
scanf("%d",&n);
for(i=n;i>0;i=i/10) {
j=j+i%10;
k=k*(i%10);
}
if((j+k)==n)
printf(" Special");
else
printf("Not special No");
}
