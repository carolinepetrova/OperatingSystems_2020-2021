#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char * argv[]) {
int fd = open(argv[1], O_CREAT|O_TRUNC|O_RDWR, 0644);

// if fd == -1

int pid = fork();

if (pid == -1) {
perror("Couldnt fork");
exit(-1);
}
else if (pid > 0) {
wait(0);
lseek(fd, 0, SEEK_SET);
char buff[1];
while(read(fd,buff,1) > 0) {
write(1, buff, 1);
write(1, "_", 1);
}
}
else {
write(fd, "foobar", 6);
}
close(fd);
return 0;
}
