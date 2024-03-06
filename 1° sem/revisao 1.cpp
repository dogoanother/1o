#include <stdio.h>
#include <stdlib.h>

float PRODUTO_ESCALAR(float a[],float b[], int n);
int main(void){
	float a[4]={2.0,3.0,2.5,50.0};
	float b[4]={1.0,1.0,2.0,0.2};
	float r;
	
	r=PRODUTO_ESCALAR(a,b,3);
	printf ("%f \n", r);
	return 0;
}
float PRODUTO_ESCALAR(float a[],float b[], int n){
	int i;
	float r=0;
	for (i=0;i<n;i++)
	r= r+ a[i]*b[i];
	return r;
}
	
