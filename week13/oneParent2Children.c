#include  <stdio.h> 
#include  <sys/types.h>  
#include  <unistd.h>  
int main() {
	int pid1 = fork();
	if (pid1 == -1) {
		perror("fork error");
		exit(-1);
	}
	else if(pid1 > 0) {
		int pid2 = fork();
		if (pid2 == -1) {
			exit(-1);
		}
		else if(pid2 > 0) {
			write(1, "Hello from parent\n", strlen("Hello from parent\n"));
		}
		else 
			write(1, "Hello from child2\n", strlen("Hello from child2\n"));
	}
	else {
		write(1, "Hello from child1\n", strlen("Hello from child1\n"));
	}
return 0;
}
