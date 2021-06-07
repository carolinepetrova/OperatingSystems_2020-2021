#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char* argv[]) {
int fd = open(argv[1], O_CREAT | O_TRUNC | O_WRONLY, 0644);

if (fd == -1) {
perror("Error opening file");
return -1;
}

char buff[1];

while (read(0, buff, 1) > 0) {
if ('0' <= buff[0] && buff[0] <= '9') {
buff[0] = '*';
}

write(fd, buff, 1);
}

close(fd);

return 0;
}
