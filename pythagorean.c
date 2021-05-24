#include<stdio.h>
#include<cs50.h>
int main(void){
float a, b, c, d, e, f, g, h;
a = get_float("Enter first side: ");
b = get_float("Enter second side: ");
c = get_float("Enter third side: ");
if(a>=b && a>=c){
f = a;
d = b;
e = c;
}
if(b>=a && b>=c){
f = b;
d = a;
e = c;
}
if(c>=a && c>=b){
f = c;
d = a;
e = b;
}
g = (d*d)+(e*e);
h = (f*f);
if(g==h){
printf("\n%f %f %f are the sides of a right triangle \n", a, b, c);
}
else{
printf("%f %f %f are not the sides of a right triangle", a, b, c);
}
}

