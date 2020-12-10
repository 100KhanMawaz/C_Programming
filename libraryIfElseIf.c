main() {
int a;
printf("Enter day");
scanf("%d",&a);
if(a<=5) {
printf("No Fine for uh my dear");
}
else if (a>5 && a<=10) {
printf("%d rs",(a-5)*1);
}
else if(a>10 && a <=20) {
printf(" fine is %d rs", (a-10)*2 + 5);
}
else if(a>20) {
printf(" fine is %d rs ", (a-20)*5 + 15);
}
else { printf ("Days Can't be negative");
}
getch();
}
