main() {
int i,j,k;
for(i=1;i<=10;i++){
for(j=1;j<=10-i;j++)
printf(" ");
for(k=1;k<=i;k++){
if(k==1||k==i)
printf("* ");
else
printf("$ ");
}
printf("\n");
}
}
