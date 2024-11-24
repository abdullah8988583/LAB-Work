#include <stdio.h>

struct Package{
	char package_name[30];
	char destination_city[30];
	char duration[10];
	float cost;
	int seats;	
};


void display_details (struct Package p1,struct Package p2,struct Package p3){

printf("   Package 1\n   ");
printf("Package Name : %s\n", p1.package_name);
printf("Destination City : %s\n", p1.destination_city);
printf("Duration : %s\n", p1.duration);
printf("Cost of Package : %f\n", p1.cost);

printf("\n");

printf("   Package 2\n   ");
printf("Package Name : %s\n", p2.package_name);
printf("Destination City : %s\n", p2.destination_city);
printf("Duration : %s\n", p2.duration);
printf("Cost of Package : %f\n", p2.cost);

printf("\n");


printf("   Package 3\n   ");
printf("Package Name : %s\n", p3.package_name);
printf("Destination City : %s\n", p3.destination_city);
printf("Duration : %s\n", p3.duration);
printf("Cost of Package : %f\n", p3.cost);

printf("\n");
	
}

int main (){
	
struct Package p1={"Platinium","Islamabad","30mins",30000,50};
printf("\n");

struct Package p2={"Gold","Islamabad","45mins",27000,70};
printf("\n");

struct Package p3={"Silver","Islamabad","60mins",20000,90};

display_details(p1,p2,p3);

printf("\n");

printf("Press 0 to exit\n");
while (1){
int choice;
printf("Enter Choice : ");
scanf("%d", &choice);
if (choice==0){
break;	
}
switch(choice){
	
		
		
		
		
	case 1:{
	
	printf("  Yours Package  ");
	printf("PACKAGE NAME : %s\n DESTINATION : %s\nDURATION : %s\n COST : %f\n SEATS AVAILABLE : %d\n", p1.package_name,p1.destination_city,p1.duration,p1.cost,--p1.seats);
	
}
break;
    
    case 2:{
    	printf("  Yours Package  ");
	printf("PACKAGE NAME : %s\n DESTINATION : %s\nDURATION : %s\n COST : %f\n SEATS AVAILABLE : %d\n", p2.package_name,p2.destination_city,p2.duration,p2.cost,--p2.seats);
    	
		
}
break;
    case 3:{
    	printf("  Yours Package  ");
	printf("PACKAGE NAME : %s\n DESTINATION : %s\n DURATION : %s\n COST : %f\n SEATS AVAILABLE : %d\n", p3.package_name,p3.destination_city,p3.duration,p3.cost,--p3.seats);
    	
		
}
break;

default:
printf("Invalid choice\n");	
	

}
}
return 0;
}