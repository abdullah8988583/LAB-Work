#include <stdio.h>
float metres;
const float kilometres=0.001;
static int count=0;


void km(float *metres){
	 float conversion=kilometres*(*metres);
	 count++;
	printf("%.3fmetres is equal to : %.3fkilometres",*metres ,conversion);
	printf("%d", count);
}
int main (){
	printf("Enter distance in metres : ");
	scanf("%f",&metres);
	
	km(&metres);
	 
}