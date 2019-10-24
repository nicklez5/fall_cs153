#include "user.h"
#include "types.h"
//#include <stdint.h>
//#include "inttypes.h"
int main(int argc, char *argv[]){
	int pid, ret_pid;
	int random_test_value = 0;
	int *exit_status;
	exit_status = &random_test_value;
	pid = fork();
	if(pid == 0){
		//getpid() must return a zero since it is a child. 
		printf(1,"\nThis is the child: PID# %d has exited with status %d\n",getpid(),0);
		exit(-1);
	}else if(pid > 0){
		//what does wait(exit_status) return though.
		ret_pid = wait(exit_status);
		//ret_pid = waitpid(0,exit_status,0);
		printf(1,"\nThis is the parent: PID# %d has exited with status %d\n",ret_pid,exit_status);	
	}else
		exit(-1);
	exit(0);
	return 0;
	/*
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
	*/
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
	
}

