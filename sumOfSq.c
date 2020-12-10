main(){
int n,i,f,s=0;
printf("enter a no till were u want sum of squares");
scanf("%d",&n);
for(i=1;i<=n;i++){
f=i*i;
s=s+f;
printf("(%d*%d) = (%d) + ",i,i,f);
}
printf(" \n=> %d",s);
}
