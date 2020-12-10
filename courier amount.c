main ()
{
int n,x;
printf("Enter Weight of the courier\n");
scanf("%d",&n);
x=(n-8)*5+12;
if(n<=8) {
    printf("price is  12 rs");
}
else {
    printf("price is %d rs", x);
    getch();
}
}
