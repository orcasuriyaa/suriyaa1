/* date and time update
 SuriyaaKumar G M, september 2014 */
 
 #include <stdio.h>
 #include <stdbool.h>
 
 struct datetime
 {
	int day;
	int month;
	int year;
	int hour;
	int minutes;
	int seconds;
 };
 
 int main(void)
 {
 	struct datetime datetimeupdate(struct datetime now, struct datetime date);
	int i;
	struct datetime time, nexttime;
	struct datetime date;
	
	printf("enter the current time\n");
	scanf("%i%i%i", &time.hour, &time.minutes, &time.seconds);
	
	printf("enter the current date\n");
	scanf("%i%i%i", &date.day, &date.month, &date.year);
	
	nexttime = datetimeupdate(time, date);
	
	printf("time after one second is %.2i:%.2i:%.2i\n", nexttime.hour, nexttime.minutes, nexttime.seconds);
	
	return 0; 
 }
 
 struct datetime datetimeupdate(struct datetime now, struct datetime date)
 {
 	struct datetime nextdate;
 	struct datetime dateupdate(struct datetime date);
 	++now.seconds;
 	
 	if(now.seconds == 60)
 	{
 		now.seconds = 0;
 		++now.minutes;
 	}
 	
 	if(now.minutes == 60)
 	{
 		now.minutes = 0;
 		++now.hour;
 		
 		if(now.hour == 24)
 		{
 			now.hour = 0;
 			nextdate = dateupdate(date);
 			printf("date after one second is %.2i:%.2i:%.2i\n", nextdate.day, nextdate.month, nextdate.year);
 		}
 		
 	}
 	
 	return now;
 	
 }
 struct datetime dateupdate(struct datetime date)
	{
 		struct datetime tommorow;
		int numberofdays(struct datetime date);
	 
 		if(date.day != numberofdays(date))
 		{
 			tommorow.day = date.day + 1;
 			tommorow.month  = date.month;
 			tommorow.year = date.year;
 		}
 		else if(date.month == 12)
		{
 			tommorow.day = 1;
 			tommorow.month = 1;
 			tommorow.year = date.year + 1;
 		}
 		else
		{
			tommorow.day = 1;
 			tommorow.month = date.month + 1;
 			tommorow.year = date.year;	
		}
		
		return tommorow;
	}

 int numberofdays(struct datetime date)
	{
		int days;
		bool isleapyear(struct datetime date);
		const int dayspermonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
		if(isleapyear(date) == true && date.month == 2)
		{
			days = 29;
		}
		else
		
			days = dayspermonth[date.month - 1];
	
		return days;
	}

bool isleapyear(struct datetime date)
{
	bool leapflag;
	
	if((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)
	{
		leapflag = true;
	}
	else
	{
		leapflag = false;
	}
	
	return leapflag;
}