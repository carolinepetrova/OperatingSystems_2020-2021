#include<stdio.h>
#include <fcntl.h>
int main() {
	int fd = open("file3.txt", O_CREAT|O_TRUNC|O_WRONLY, 0644);
	if (fd == -1) {
		printf("Cant open file");
		return (-1);
	}
	return 0;
}

