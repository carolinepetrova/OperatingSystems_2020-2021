#include  <stdio.h>
#include  <sys/types.h>
#include  <sys/wait.h>
#include  <unistd.h>

int main(int argc, char * argv[]) {
		int status = 0;
        int pid1 = fork();
        if (pid1 == -1) {
                perror("fork error");
                exit(-1);
        }
        else if(pid1 > 0) {
         	int pid_child = wait(&status);
    		printf("Process %s with pid=%d exited with status %d\n", argv[1],pid_child, status);

        }
        else {
        	int status2 = 0;
        	int pid2 = fork();
        	if (pid2 > 0) {
        		int pid_child2 = wait(&status2);
    			printf("Process %s with pid=%d exited with status %d\n", argv[2],pid_child2, status);
    			execlp(argv[3], argv[3], NULL);
        	}
        	else if (pid2==0) {
        		int status3 = 0;
        		int pid3 = fork();
        		if (pid3 > 0) {
	        		int pid_child3 = wait(&status3);
	    			printf("Process %s with pid=%d exited with status %d\n", argv[3],pid_child3, status);
	    			execlp(argv[2], argv[2], NULL);
        		}
        		else if (pid3==0) {
        			execlp(argv[1], argv[1], NULL);
        		}
        	}
        }
        
return 0;
}

