int* length(char*);
char* reverse(char*);

int* length (char *p){
int l;
for(l=0;*(p+l)!='\0';l++);
return(l);
}
char* reverse(char *p) {
    int l,i,t;
for(l=0;*(p+l)!='\0';l++);
for(i=0;i<l/2;i++) {
    t=*(p+i);
    *(p+i)=*(p+l-1-i);
    *(p+l-1-i)=t;
}
return(p);
}

void









main() {
printf("%d",length("hum tera papa hai "));
printf("%s",reverse("hum tera papa hai"));

}

