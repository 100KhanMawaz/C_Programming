main() {
main() {
int phy,chem,maths,cs,total_marks;
float percentage;
printf("Enter phy marks\n\n");
scanf ("%d",&phy);
printf("Enter chem marks\n\n");
scanf ("%d",&chem);
printf("Enter maths marks\n\n");
scanf ("%d",&maths);
printf("Enter cs marks\n\n");
scanf ("%d",&cs);
total_marks = phy+chem+maths+cs;
printf("Total marks is %d ", total_marks);
percentage = total_marks/4.00;
printf("Percentage is %.2f% ", percentage);
if(percentage>=75) {
    printf(" Distinction\n");}
else if(percentage>=60&&percentage<75){
    printf(" 1st Division\n");}
else if(percentage>=45&&percentage<60) {
    printf(" 2nd Divison\n"); }
else if(percentage>=33&&percentage<45) {
    printf(" 3rd Division\n");}
else  {
    printf(" F.A.I.L\n");
}
getch();
}
