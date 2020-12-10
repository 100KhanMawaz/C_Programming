main()
{
int n,row,col;
scanf("%d",&n);
for(row=1;row<=4;row++) {
    for(col=1;col<=row;col++) {
    printf("%d ",col);
    }
printf("\n");
    }
}
