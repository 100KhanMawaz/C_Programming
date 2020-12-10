main(){
int a;
a=SumOfSq();
printf("%d",a);

}
int SumOfSq(){
int n,i,f,s=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
f=i*i;
s=s+f;
}
return(s);
}
int SumOfFactorials() {
int n,i,j,f=1,s=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    f=f*i;
    s=s+f
}
}
