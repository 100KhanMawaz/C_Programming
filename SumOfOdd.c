main(){
int n,i,s=0;
printf("enter total odd whose sum is to be taken");
scanf("%d",&n);
for(i=1;i<=n;i++){
s=s+(2*i-1);
printf("%d + ",(2*i-1));
}
printf(" \n=> %d",s);
}
// o/p 10,000/-
