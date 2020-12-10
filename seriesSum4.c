main()
{
    int n,i,j,sq;
    float s1=0,s2=0,f=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++){
        sq=pow(j,j);
        f*=j;
        }
        if(i%2!=0)
            s1+=sq/f;
        if(i%2==0)
            s2+=sq/f;
        f=1;
    }
printf("series sum is : %f ",s2-s1);
}

