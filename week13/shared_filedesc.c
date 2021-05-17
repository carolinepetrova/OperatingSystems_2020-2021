#include <sys/types.h>
#include <stdio.h> 
#include <sys/types.h>  
#include <unistd.h>  
#include <fcntl.h>


/*
Shared file descriptor				
*/

int main() {
	int fd1 = open("filedesc", O_CREAT|O_TRUNC|O_WRONLY, 0777);
	int seek_ptr = 0;
	if(fd1 == -1) {
		perror("Couldn't open file");
		exit(-1);
	}
	int pid = fork();
	if(pid>0) {
		printf("Parent: file descriptor %d\n", fd1);
		seek_ptr = lseek(fd1, 0, SEEK_CUR);
		printf("Parent: File pointer is at %d\n", seek_ptr);
		write(fd1, "Hello from parent\n", strlen("Hello from parent\n"));
		
	}
	else if(pid == 0) {
		printf("Child: file descriptor %d\n", fd1);
		seek_ptr = lseek(fd1, 0, SEEK_CUR);
		printf("Child: File pointer is at %d\n", seek_ptr);
		write(fd1, "Hello from child\n", strlen("Hello from child\n"));	
	}
	else {
		perror("Couldn't fork");
		exit(-1);
	}

	return 0;
}
