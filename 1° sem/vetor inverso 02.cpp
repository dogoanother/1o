#include <stdio.h>


int main(void){
	int v[5]={3,6,9,12,15};
	int temp, i;
	for(i=0;i<5/2;i++)
	{ temp=v[i];
	v[i]=v[5-1-i];
	v[5-1-i]=temp;
	}
	for(i=0;i<5;i++)
	printf("%d ",v[i]);
	return 0;
}

