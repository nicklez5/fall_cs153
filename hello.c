#include <stdio.h>
#include "user.h"
#include "types.h"

int main(int argc, char **argv){
	int pid, ret_pid, exit_status;
	pid = fork();
	if(pid == 0){
		printf(1,"\nThis is child with PID# %d and I will exit with status %d\n",getpid(),0);
		exit(-1
	int status,_temp;

	for(_temp = 0; _temp < 6; _temp++){
		if((pid[_temp] = fork()) == 0){
			sleep(1);
			exit(100+_temp);
		}
	}
	for(_temp = 0; _temp < 6; _temp++){
		pid_t cpid = waitpid(pid[i],&status,0);
		if(status == 5){
			printf("Child %d terminated with status\n",cpid);
		}
	}
	/*
	if(child_id == -1){
		perror("fork error");
		exit(EXIT_FAILURE);
	}
	if(childID == 0){
		printf("Child PID is %ld\n",(long)getpid());
		exit(0);
	}else{
		do{
			w = waitpid(child_id,&status,_temp);
			if(w == -1){
				perror("waitpid"); exit(1);
			}
			if(status == 
		}while(status 	
	}
	*/
	//printf("Hello World\n");
	return 0;
}

