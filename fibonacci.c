main ()
 {

     int n,i,j,c,a=0,b=1;
     int s=0;
     scanf("%d",&n);
     printf("%d\t%d\t",a,b);
     for(i=1;i<=n-2;i++){

    c=a+b;
        printf("%d\t",c);
    a=b;
    b=c;
     s+=c;
         }

          printf("\nSeries sum is : %d ",s+1);


 }


