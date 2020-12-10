void main() {
int a[7];
input(a);
sort(a);
display(a);
getch();
}
void input(int *p) {
int i;
for(i=0;i<=6;i++)
    scanf("%d",p+i);
}
void sort(int *p) {
int round,i,t;
for(round=1;round<=6;round++) {
    for(i=0;i<=6-round;i++) {
    if(*(p+i) > *(p+i+1)) {
    t=*(p+i);
    *(p+i) = *(p+i+1);
    *(p+i+1) = t;
    }
}
}
}

display(int *p) {
int i;
for(i=0;i<=6;i++)
    printf(" %d ",*(p+i));
}

