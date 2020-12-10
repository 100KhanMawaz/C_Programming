main(){
int c,a,b;
a=Sq();
b=factorial();
c=a/b;
}
int Sq(){
int n,s;
scanf("%d",&n);
s=n*n;
return(s);
}
int factorial()
 {
     int n,i,j,f=1;
     scanf("%d",&n);
     for(i=1;i<=n;i++) {
        f*=i;
     }
     return(f);
 }
