main() {
int n,a,b=0,i;
printf("enter a no\n");
scanf("%d",&n);
for(i=n;i!=0;i=i/10){
a=i%10;
b=b*10+a;
}
printf("Reverse is %d : \t",b);
getch();
}
