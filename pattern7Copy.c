main() {
int i,j,k;
for(i=1;i<=10;i++){
for(k=1;k<=i-1;k++)
printf(" ");
for(j=1;j<=11-i;j++)
printf("* ");
printf("\n");
}
}
