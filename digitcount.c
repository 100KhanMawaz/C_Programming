void main() {
int n,i,a=0;
printf("Enter a No. whose digit");
scanf("%d",&n);
for(i=n;i!=0;i=i/10) {
  a++; }
  printf("Total digits are : %d",a);
}
