/*
 * time.c
 *
 *  Created on: 30 Sep 2017
 *      Author: 19384343
 */

#include <stdlib.h>
#include "time.h"

int monthHourToDay(int monthHour){


	return (monthHour / 24) + 1;
}

int monthHourToDailyHour(int monthHour){
	int j;
	j = monthHour % 24;
	return j;
}
