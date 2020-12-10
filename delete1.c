main() {
char s[5][7];
int i;
printf("Enter 5 City names");
for(i=0;i<=4;i++)
gets(&s[i][0]);
for(i=0;i<=4;i++)
puts(&s[i][0]);
}

