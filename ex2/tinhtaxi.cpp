#include <stdio.h>
int main()
{
 float f;
	printf("nhap so km \n");
	scanf("%f", &f);
	if (f<0.8) 
	printf("tra 10.000d"); else
	if (f<=30)
	printf("tra %f", (10+9*(f-0.8))); else
	printf("tra %f", (10+9*(30-0.8)+8*(f-25.8)));
    return(0);
}
	
	
