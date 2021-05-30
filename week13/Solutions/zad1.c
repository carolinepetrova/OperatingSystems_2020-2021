#include  <stdio.h> 
#include  <sys/types.h>  
#include  <unistd.h>  

int main(int argc, char * argv[]) {
int pid = fork();
int status;
if (pid == -1) {
	perror("couldn't fork");
	exit(-1);
}
else if (pid > 0) {
	wait(&status);
	if (status != 0) {
		exit(-1);
	} 
	if (execlp(argv[2],argv[2],NULL) == -1) {
	perror("exec problem");
	exit(-1);
}
}
else {
	if (execlp(argv[1], argv[1], NULL) == -1) {
		perror("exec problem");
		exit(-1);
	}
}
return 0;
}
