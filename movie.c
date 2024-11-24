#include <stdio.h>
#include <string.h>
struct movie_info{
	char title[25];
	char genre[25];
	char director[25];
	int year;
	float rating;
};



void add_movie(struct movie_info *movie){
	printf("Title of movie : ");
	scanf("%s", &(*movie).title);
	printf("Genre of movie : ");
    scanf("%s", &(*movie).genre);
	printf("Director of movie : ");
	scanf("%s", &(*movie).director);
	printf("Year of movie : ");
	scanf("%d", &(*movie).year);
    printf("Rating of movie : ");
	scanf("%f", &(*movie).rating);
		
}
void display_details(struct movie_info movie){
	printf("%s\n", movie.title);
	
	printf("%s\n", movie.genre);
	
	printf("%s\n", movie.director);
	
	printf("%d\n", movie.year);
	
	printf("%f\n", movie.rating);
}
void search(struct movie_info movie){
char search_genre[25];		
int moviefound=0;	
	printf("Enter genre : ");
	
	scanf("%s", &search_genre);
if	(strcmp(search_genre,movie.genre)==0){

printf("Movie found\n");
display_details(movie);
moviefound=1;
}


	
}
int main () {
int movie_number;	
printf("Enter number of movies you want to store : ");
scanf("%d", &movie_number);	
struct movie_info movie1[movie_number];
int choice;

	

while (1)	{

printf(" 1. Add Movie\n");
printf(" 2. Display Movie\n");
printf(" 3. Search By genre\n");
printf(" 4. Exit\n");
printf("Enter your choice\n");

scanf("%d", &choice);
printf("\n");


switch (choice){

case 1:

for (int i=0;i<movie_number;i++){
	
add_movie(&movie1[i]);
}

break ;
printf("\n");

case 2:

for (int i=0;i<movie_number;i++){

display_details(movie1[i]);
}
break ;
printf("\n");
case 3:
for (int i=0;i<movie_number;i++){
	
search(movie1[i]);

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