/*
   *
  * *
 * * *
* * * *

*/
main()
{
    void pat();
    pat();
}
void pat()
{
  static   int i=5,j,k,s=1;
    if(i>=1)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=1;k<=s;k++)
            printf("* ");
        s++;
        printf("\n");
        i--;
        pat();
    }
}
