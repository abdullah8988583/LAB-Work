#include <stdio.h>
struct flightdetails{
	char flight_number[25];
	char departure_city[25];
	char destination_city[25];
	
};
void booking(struct flightdetails *f1){
	printf("Enter flight number like (123H-34) : "); 
	scanf("%s", &(*f1).flight_number);
	printf("Enter departure city : ");
	scanf("%s", &(*f1).departure_city);
	printf("Enter destination city : ");
	scanf("%s", &(*f1).destination_city);

	
}
	
void display_booking(struct flightdetails f1){
printf("Flight number is : %s\n", f1.flight_number);
printf("Departure City is : %s\n", f1.departure_city);
printf("Destination City is : %s\n", f1.destination_city);	
}

int main (){
	
	struct flightdetails flight1;
	booking(&flight1);
	printf("\n");
	display_booking(flight1);
	
return 0;
}
