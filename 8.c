#include<stdio.h>
int main(){
    int a=3,c;
    int b=6;
    c=a;
    a=b;
    b=c;
    printf("swapped value is a=%i  b=%i",a,b);
}