#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include <unistd.h>

int main() {
	int fd1 = open("hellofile", O_RDONLY);
	int position = lseek(fd1,5,SEEK_SET);
	printf("The offset is at: %d \n", position);
	char buff1[10];
	read(fd1, buff1, 10);
	write(1, buff1, sizeof(buff1));

	int position2 = lseek(fd1,0,SEEK_CUR);
	printf("The offset is at: %d \n", position2);

	int position3 = lseek(fd1, 0,SEEK_SET);
	printf("The offset is at: %d \n", position3);

	char buff2[10];
	read(fd1, buff2, 10);
	write(1, buff2, sizeof(buff1));
	return 0;
}
