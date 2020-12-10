main() {
float  mass,velocity,kineticenergy;
printf("Enter Mass and Velocity");
scanf("%f%f",&mass,&velocity);
kineticenergy = 0.5*mass*velocity*velocity;
printf("kinetic energy=%.2f", kineticenergy);
getch();
}
