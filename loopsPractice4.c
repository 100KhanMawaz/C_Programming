void main() {
int n,i,j;
printf("Enter a No. Whose Table is to be displayed\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=10;j++) {
    printf("%d*%d= %d  ",i,j,j*i);
}
printf("\n\n");
}
}
