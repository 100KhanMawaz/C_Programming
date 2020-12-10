main() {
int i,j;
char x=64;
for(i=1;i<=4;i++) {
for(j=1;j<=i*2;j++){
x++;
if(x%2!=0)
printf("%c ",x);
}
x=64;
printf("\n\n");
}
}
