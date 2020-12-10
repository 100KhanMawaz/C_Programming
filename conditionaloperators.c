main() {
int a,b,c;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
//(a>b)?(a>c)?printf("%d",a):printf("%d",c):(b>c)?printf("%d",b):printf("%d",c);
printf("%d",(a>b)?(a>c)?a:c:(b>c)?b:c);
}
4
4
