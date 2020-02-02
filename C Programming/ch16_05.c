/*Name: ch16_05.c
 *Purpose: structures
 *Date: 04/16/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

struct time {
	int departure;
	int arrival;
};

int main(void)
{
	int i, hour, min, user_time, closest;
	int depart_h, depart_m;
	int	arrive_h, arrive_m;
	char d, a;

	struct time flight[] = {
		{flight[0].departure = 8  * 60     },
		{flight[0].arrival   = 10 * 60 + 16},
		{flight[1].departure = 9  * 60 + 43},
		{flight[1].arrival   = 11 * 60 + 52},
		{flight[2].departure = 11 * 60 + 19},
		{flight[2].arrival   = 13 * 60 + 31},
		{flight[3].departure = 12 * 60 + 47},
		{flight[3].arrival   = 15 * 60     },
		{flight[4].departure = 14 * 60     },
		{flight[4].arrival   = 16 * 60 +  8},
		{flight[5].departure = 15 * 60 + 45},
		{flight[5].arrival   = 17 * 60 + 55},
		{flight[6].departure = 19 * 60     },
		{flight[6].arrival   = 21 * 60 + 20},
		{flight[7].departure = 21 * 60 + 45},
		{flight[7].arrival   = 23 * 60 + 58},
	};

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);

	user_time = hour * 60 + min;

	for (i = 1; i < 8; i++) {
		if (abs(user_time - flight[i].departure) <
				abs(user_time - flight[0].departure)) {
			flight[0] = flight[i];
		}
	}
	depart_h = flight[0].departure / 60;
	if (depart_h >= 12)
		d = 'p';
	else
		d = 'a';
	if (depart_h > 12)
		depart_h -= 12;
	depart_m = flight[0].departure % 60;

	arrive_h = flight[0].arrival / 60;
	if (arrive_h >= 12)
		a = 'p';
	else
		a = 'a';
	if (arrive_h > 12)
		arrive_h -= 12;
	arrive_m = flight[0].arrival % 60;

	printf("Closest departure time is %2d:%2d %c.m. ", depart_h, depart_m, d);
	printf("arriving at %2d:%2d %c.m.\n", arrive_h, arrive_m, a);

	return 0;
}
