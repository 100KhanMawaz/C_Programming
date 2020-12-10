main()
 {
     int n,i,s=0,a=0,b=1,c=1,d;
     scanf("%d",&n);
     printf("%d\t%d\t%d\t",a,b,c);
     for(i=1;i<=n-3;i++)
     {
         d=a+b+c;
         a=b;
         b=c;
         c=d;
         printf("%d\t",d);
         s+=d;
     }
     printf("\n%d",s+2);
 }
