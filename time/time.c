#include <stdio.h>
#include <time.h>
#include <sys/time.h>


int main() {
	time_t t;
	
	printf("Current time: %ld\n", (long) time(&t));
	//printf("The same value: %ld\n", (long) t));
	
	struct timeval tv;
	int ret;

	ret = gettimeofday(&tv, NULL);
	if (ret)
		perror("gettimeofday");
	else
		printf("seconds=%ld useconds=%ld\n",
				(long) tv.tv_sec, (long) tv.tv_usec);

	return 0;
}
