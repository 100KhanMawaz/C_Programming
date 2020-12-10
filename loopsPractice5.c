void main()
 {
     int i,j,n,sum=0;
     printf("Enter a No. to print equivalent odd no's");
     scanf("%d",&n);
     for(i=1;i<=n;i++) {
            j=2*i-1;
     printf("%d,",j);
                sum += j;
     }
     printf("Sum of Odd No's is %d : ",sum );

 }
