main() {
int i,j,x=0;
for(i=1;i<=5;i++) {
for(j=1;j<=i;j++) {
x=x+j;
printf("%d ",j);
printf("=%d ",x);
}
x=0;
printf("\n");
}
}
