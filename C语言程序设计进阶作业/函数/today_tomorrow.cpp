#include<stdio.h>
	struct date {
		int month;
		int day;
		int year;
	};
	
	int isleap(struct date d);
	int numberofdays(struct date d);
	
	int main(  ){
		struct date today, tomorrow;
		
		printf("today is yyyy-mm--dd\n");
		scanf("%i-%i-%i", &today.year, &today.month, &today.day);
		
		if( today.day < numberofdays(today) ){
			tomorrow.day = today.day + 1;
			tomorrow.month = today.month;
			tomorrow.year = today.year;
		} else if (today.month == 12) {
			tomorrow.day = 1;
			tomorrow.year = today.year + 1;
			tomorrow.month = 1;
		} else {
			tomorrow.day = 1;
			tomorrow.month = today.month + 1;
			tomorrow.year = today.year;
		}
		
		printf("%d-%d-%d", tomorrow.year, tomorrow.month, tomorrow.day);
	}
	
	int numberofdays(struct date today) {
		int days;
		
		const int dayspermonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
		
		if ( today.month == 2 && isleap(today) == 1 )
			days = 29;
		else 
			days = dayspermonth [today.month - 1];
			
		return days; 
		
		
	}
	
	int isleap(struct date today) {
		int leap = 0;
		
		if (  today.year % 4 == 0 && today.year % 100 != 0 || today.year % 400 == 0 )
			leap = 1;
		
		return leap;
	}	
