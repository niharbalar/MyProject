# include <stdio.h>
 
void area(float l, float b){
	float area;
	
	area = l*b;
	
	printf("area is:%f\n",area);
 }
 
 int main (){
 	
 	area(5, 8);
 	area(4, 6);
 	area(7, 9);
 	area(2, 3);
 	
 	return 0;
 }
