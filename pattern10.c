main() {
int i,j,k;
for(i=1;i<=7;i++){
if(i<=4) {
for(j=1;j<=4-i;j++)
printf(" ");
for(k=1;k<=i;k++)
printf("* ");
}
else{
for(j=1;j<=i-4;j++)
printf(" ");
for(k=1;k<=8-i;k++)
printf("* ");
}
printf("\n");
}
}

