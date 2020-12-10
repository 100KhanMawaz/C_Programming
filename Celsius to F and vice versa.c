main() {
    int a;
    float b,c;
    printf("Enter 1 to Convert Celsius to Fahrenheit\n\nEnter 2 to Convert Fahrenheit to celsius\n");
    scanf("%d",&a);
    if(a==1) {
        printf("Enter temp in Celsius ");
        scanf("%f",&b);
        printf("Temp in Fahrenheit is %.2f ", b*9/5+32);
        }
else if (a==2) {
    printf("Enter temp in Fahrenheit ");
    scanf("%f",&c);
    printf("Temp in Celsius is %.2f ", (c-32)*5/9);
    }
    else {
        printf("Invalid Option Selected");
    }
    getch();
}
