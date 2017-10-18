#include <stdio.h>

int main(){
	int a, b;
	printf ("Wpisz 2 liczby calkowiiiite\n");
	scanf ("%d", &a);
	scanf ("%d", &b);
	while(a!=b){
		if(a>b)
		a-=b;
		else
		b-=a;
	}
	printf ("NWD=%d", a);
	
	return 0;
}
	
