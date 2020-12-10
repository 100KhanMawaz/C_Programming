#include<stdio.h>
void main(){
int i;
char j;
for(i=65;i<=78;i++){
for(j=65;j<=78;j++){
if(j<=i)
printf("%c",j);
else printf(" ");
}
printf("\n");
}
}
