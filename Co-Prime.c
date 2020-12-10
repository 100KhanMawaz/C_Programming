main() {
int n,m,i,hcf;
printf("Enter 2 no");
scanf("%d%d",&n,&m);
for(i=1;i<n/2;i++) {
if((n%i==0)&&(m%i==0)) {
hcf = i;
}
}
if (hcf ==1) {
printf("Co-Prime");
}
else printf("Not Co-Prime");
}
