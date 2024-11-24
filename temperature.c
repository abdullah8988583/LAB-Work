#include <stdio.h>
const float temperature=56;
float input_temperature;
static int count=0;

void compare(int *input_temperature){
	if(*input_temperature>temperature){
     printf("It exceed the limit\n");
	count++;
	printf("%d Times it exceed the limit\n", count);		
	}
	else {
		printf("Temperature is in the limit\n");
	}
}
int main (){
while (1){
	printf("Input the temperature : ");
	scanf("%d", &input_temperature);
	
compare(&input_temperature);
	
}
return 0;	
}