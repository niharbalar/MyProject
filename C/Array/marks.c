# include <stdio.h>

int main () {
	
	int marks[16]={85,85,37,45,68,23,99,100,81,70,42,55,68,77,96,18};
	int counter[11]={0};
	int i,index;
	
	for(i=0;i<16;i++){
		index=(marks[i])/10;
		counter[index]++;
	}
	
	for(i=0;i<10;i++){
		printf("%d - %d : %d\n",i*10,i*10+9,counter[i]);
	}
	
	printf("100 -100 : %d",counter[10]);
	
	return 0;
}
