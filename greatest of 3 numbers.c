main() {

int n,x,z;
printf("Enter kar 3 Number \n");
scanf("%d%d%d",&n,&x,&z);

if(n>x&&n>z)
printf("Bada ye hai %d", n);
else if (x>n&&x>z)
printf("ye bada hai %d ", x);
else
    printf("greatest %d ", z);

}
