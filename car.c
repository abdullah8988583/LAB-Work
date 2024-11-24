#include <stdio.h>
#include <string.h>
struct car_info{
	char make[25];
	char model[25];
	int year;
	float price;
    float mileage;
};



void add_car(struct car_info *car1){
	printf("Make of car : ");
	scanf("%s", &(*car1).make);
	
	printf("Model of car : ");
    scanf("%s", &(*car1).model);
	
	printf("Year of car : ");
	scanf("%d", &(*car1).year);
	
    printf("Price of car : ");
	scanf("%f", &(*car1).price);
	
	printf("Mileage of car : ");
	scanf("%f", &(*car1).mileage);
		
}
void display_details(struct car_info car1){
	printf("%s\n", car1.make);
	
	printf("%s\n", car1.model);
	
	printf("%d\n", car1.year);
	
	printf("%f\n", car1.price);
	
	printf("%f\n", car1.mileage);
}
void search(struct car_info car1){
char search_make[25];
char search_model[25];		
int makefound=0;
int modelfound=0;	
	printf("Enter make : ");
	
	scanf("%s", &search_make);
if	(strcmp(search_make,car1.make)==0) {

printf("Car found\n");
display_details(car1);
makefound=1;

}
	printf("Enter model : ");

	
	scanf("%s", &search_model);
if	(strcmp(search_model,car1.model)==0) {

printf("Car found\n");
display_details(car1);
modelfound=1;


}


	
}
int main () {
int car_number;	
printf("Enter number of Cars you want to store : ");
scanf("%d", &car_number);	
struct car_info car1[car_number];
int choice;

	

while (1)	{

printf(" 1. Add Car\n");
printf(" 2. Display Car\n");
printf(" 3. Search By make and model\n");
printf(" 4. Exit\n");
printf("Enter your choice\n");

scanf("%d", &choice);
printf("\n");


switch (choice){

case 1:

for (int i=0;i<car_number;i++){
	
add_car(&car1[i]);
}

break ;
printf("\n");

case 2:

for (int i=0;i<car_number;i++){

display_details(car1[i]);
}
break ;
printf("\n");
case 3:
for (int i=0;i<car_number;i++){
	
search(car1[i]);

}
break ;
printf("\n");

case 4:
break;	
printf("\n");
 
default:
printf("Invalid choice");
}
}
return 0;
}