main()
 {
     int n,i,j,s=1,f=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++){
     for(j=1;j<=i;j++)
     {
         s*=j;
     }

     f+=s;
     s=1;
     }
     printf("%d ",f);
 }
