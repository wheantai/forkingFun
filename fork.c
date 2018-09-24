#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){

	printf("starting to fork\n");
	for(unsigned char i = 0; i < 6; i++){

		if(fork() == 0){
			printf("child process, breaking out of loop\n");
			break;
		}else{
			printf("make child process %d\n", i);
		}

	}
	return 0;
}
