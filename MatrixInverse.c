main()
{
int a[3][3],i,j,c[3][3];
printf("Enter a matrix whose inversion is possible");
for(i=0;i<=2;i++){
for(j=0;j<=2;j++) {
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
        printf("%d  ",a[i][j]);
    }
    printf("\n\n");
}
}
