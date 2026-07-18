# include <stdio.h>

int main () {
	
	float pa, dis=0;
	char item;
	
	printf("Please enter your Purchase Amount and Purchase Item:\n");
	scanf("%f %c",&pa,&item);
	
	switch (item){
		case 'm':
			if(pa>=0 && pa<=100){
				dis = 0;
			} else if (pa>100 && pa<=200){
				dis = pa*0.05;
			} else if (pa>200 && pa<=300){
				dis = pa*0.075;
			} else if (pa>300){
				dis = pa*0.10;
			} 
			break;
			
		case'h':
			if(pa>=0 && pa<=100){
				dis = pa*0.05;
			} else if (pa>100 && pa<=200){
				dis = pa*0.075;
			} else if (pa>200 && pa<=300){
				dis = pa*0.10;
			} else if (pa>300){
				dis = pa*0.15;
			} 
			break;
			
		default:
			printf("Invalid Input!Please enter correct item");
	}
	
	printf("Discount on item:%f\n",dis);
	printf("Final Amount:%f",pa-dis);
	
	return 0;
} 
