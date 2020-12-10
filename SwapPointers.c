void swap(int *,int *);
void main () {
int a,b;
printf("Enter 2 NO\n");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("a=%d\t b=%d",a,b);
getch();
}
void swap(int *x,int *y) {
int t;
t = *x;
*x=*y;
*y = t;
}

