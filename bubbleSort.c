void main() {
int j,i;
int a[5];
for(i=0;i<=4;i++)
scanf("%d",&a[i]);
bubblesort(a,5);
for(j=0;j<=4;j++)
    printf("%d " ,a[j]);
}
void bubblesort(int x[],int n) {
    int i,t,round;
    for(round = 1; round<=4; round++ ) {
        for(i=0;i<=n-1-round;i++) {
            if(x[i] > x[i+1]){
                t = x[i];
                x[i]=x[i+1];
                x[i+1] = t;
            }
        }

    }
}
