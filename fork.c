#include<stdio.h>
#include<unistd.h>
int main() {
	int i=1;
	while(i<15){
		fork();
	    	printf("%d\n",i);
	    	i++;
		usleep(1000000);
	}
	return 0;
}
