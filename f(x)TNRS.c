int add(void); // f(x) type declration i.e takes nothing returns something //
int add() // f(x) defination //
{
int a,b,c;
printf("enter 2 no");
scanf("%d%d",&a,&b);
c= a+b; // print ni hoga because return type hai //;lkjh
return (c);
}
main() {
int s;
s=add();
printf("%d",s);
getchar();
}
