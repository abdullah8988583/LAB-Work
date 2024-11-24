#include <stdio.h>
#include <math.h>                                  //Bottom-left(0,0) Bottom right(4,0) topright(4,3) topleft (0,3)
struct cordinatepoints{
	float x;
	float y;
	
};
void distance(struct cordinatepoints *xy){

float x1=0;                   //(x3.y3)                                      (x4,y4)
float y1=0;         
float x2=4;
float y2=0;
float x3=0;
float y3=3;
float x4=4;                 //(x1,y1)                                       (x2,y2)
float y4=3;

float diagonal_distance;
diagonal_distance=sqrt ( ( (x4-x1) * (x4-x1) ) + ( (y4-y1) * (y4-y1) ) );
printf("The diagonal distance of rectangle is : %f", diagonal_distance);
printf("\n");
printf("Enter x :");
scanf("%f", &(*xy).x);

printf("Enter y :");
scanf("%f", &(*xy).y);

float distance;
distance=sqrt  ( ( ( (*xy).x-x1) * ( (*xy).x-x1) ) + ( ((*xy).y-y1) * ((*xy).y-y1) ) );

if (distance>diagonal_distance){
	printf("Point is outside the boundary");
	
}
else{
	printf("Point is inside the boundary");
}
}
int main (){ 
struct cordinatepoints point1;
distance(&point1);                                    
return 0;	
}