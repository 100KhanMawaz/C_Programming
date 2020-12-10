#include<stdio.h>
#include<conio.h>
main() {
int a[5],i,b;
for(i=0;i<=4;i++)
scanf("%d",&a[i]);
if(a[0]>a[1]) {
	if(a[0]>a[2]) {
		if(a[0]>a[3]) {
			if(a[0]>a[4]) {
	printf("greatest%d",a[0]);
}
else {
printf("greatest%d",a[4]);
}
}
}
else if(a[3]>a[4]) {
printf("greatest%d",a[3]);
}
else {
printf("greatest%d",a[4]);
}
}
else if(a[2]>a[3]) {
if(a[2]>a[4]) {
printf("greatest%d",a[2]);
}
else {
printf("greatest%d",a[4]);
}
}else if(a[3]>a[4]){
printf("greatest%d",a[3]);
}
else{
printf("greatest%d",a[4]);
}
}

