main()
 {
     int n,i,j,s=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++){
            if(i==1)
            printf("1=1");
            else {
            for(j=1;j<=i;j++){
            printf("%d + ",j);
            s+=j;
            }
            printf("= %d",s);
            s=0;
            }
printf("\n");
     }
 }
