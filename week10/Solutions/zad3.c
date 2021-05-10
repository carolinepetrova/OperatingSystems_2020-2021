#include <unistd.h>
#include <fcntl.h>
int main(int argc, char * argv[]) {
for(int i = 1; i < argc; i++) {
int fd = open(argv[i], O_RDONLY);
if (fd == -1) {
perror("Error opening file");
return -1;
}
char buff[1];
while(read(fd, buff, 1) > 0) {
write(1, buff, 1);
}
close(fd);
}
return 0;
}
