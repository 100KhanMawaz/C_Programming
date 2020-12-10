main() {
int n,f=1,s=0,i,j;
while(1) {
printf("Enter a no till where you want the sum of factorials\n");
scanf("%d",&n);
for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
                f*=j;
}
s+=f;
f=1;
}
printf("%d  \n",s);
s=0;
}

}
