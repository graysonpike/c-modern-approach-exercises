// Program to test structs

#include <stdio.h>
#include <stdlib.h>

struct time {
	int hours, minutes, seconds;
};

struct time split_time(int seconds) {
	struct time t;
	t.hours = seconds / (60 * 60);
	t.minutes = (seconds - (3600) * t.hours) / 60;
	t.seconds = (seconds - (3600) * t.hours - (60) * t.minutes);
	return t;
}

int main(int argc, char *argv[]) {
	struct time t = split_time(10000);
	if(argc > 1){
		t = split_time(atoi(argv[1]));	
	}
	printf("%d hours, %d minutes, and %d seconds\n", t.hours, t.minutes, t.seconds);
}