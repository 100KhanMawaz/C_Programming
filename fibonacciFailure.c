main ()
 {

     int n,i,j,c,a=0,b=1;
     int s=0;
     scanf("%d",&n);
     for(i=0;i<=n;i++)
     {
         c=a+b;
         s+=c;
         printf("%d\t",c);
         a=b;
         b=c;
     }
     printf("\nSum Of Series Is : %d",s+1);
 }


