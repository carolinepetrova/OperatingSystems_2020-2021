#include  <stdio.h> 
#include  <sys/types.h>  
#include  <unistd.h>  
int main() {
	int a = 1;
	int pid = fork(); 
	if(pid == -1) {
		perror("Couldn't fork!");
		exit(-1);
	}
	else if(pid > 0) {
		++a;
	}
	else {
		--a;
	}
	printf("a=%d\n",a);  
	return  0; 
}
