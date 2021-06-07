#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char* argv[]) {
int fd = open(argv[1], O_RDONLY);

if (fd == -1) {
perror("Error opening file");
return -1;
}

unsigned counter = 0;
char buff[1];

while (counter < 10 && read(fd, buff, 1) > 0) {
write(1, buff, 1);

if (buff[0] == '\n') {
counter++;
}
}

close(fd);

return 0;
}
