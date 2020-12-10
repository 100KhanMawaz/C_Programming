 main()
 {
     int i,j,x=0;
     for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=6-i)
                printf("%d ",j);
                else {
                x++;
                 printf("%d ",x);
            }
            }
            x=0;
printf("\n");
     }
 }
