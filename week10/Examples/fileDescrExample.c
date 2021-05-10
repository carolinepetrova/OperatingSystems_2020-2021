#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include <unistd.h>

int main() {
	int fd1 = open("empty1", O_RDONLY);
	printf("file descriptor number: %d \n",fd1);
	int fd2 = open("empty2", O_RDONLY);
	printf("file descriptor number: %d \n",fd2);
	close(fd1);
	int fd3 = open("empty3", O_RDONLY);
	printf("file descriptor number: %d \n",fd3);
}
