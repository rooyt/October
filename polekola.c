#include <stdio.h>

double polekola (double r){
	double pi=3.41;
	return pi*r*r;
}

int main(){
	double const pi=3.41;
	double r;
	printf ("Podaj promień\n");
	scanf ("%lf", &r);
	printf ("Pole wynosi=%lf", r*r*pi);
	
	return 0;
}
