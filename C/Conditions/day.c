# include <stdio.h>

int main () {
	
	char day;
	
	printf("Please enter character between (M-t-W-T-F-s-S):");
	scanf("%c",&day);
	
	switch (day) {
		case 'M':
			printf("Monday");
			break;
			
		case 't':
			printf("Tuesday");
			break;
			
		case 'W':
			printf("Wednesday");
			break;
			
		case 'T':
			printf("Thursday");
			break;
			
		case 'F':
			printf("Friday");
			break;
			
		case 's':
			printf("Saturday");
			break;
			
		case 'S':
			printf("Sunday");
			break;
			
		default:
			printf("Invalid Input!Please enter character between (M-t-W-T-F-s-S)");
	}
	return 0;
} 
