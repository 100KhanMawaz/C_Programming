main()
 {
     int i,j,x=0;
     for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(j<=4-i)
                printf(" ");
                else
                { x++;
                 printf("%d",x);
            }
            }
            x=0;
printf("\n");
     }
 }
