#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]) {
    char buff[1];
    int fd = open(argv[1], O_CREAT | O_TRUNC | O_WRONLY, 0644);
    if (fd == -1) {
        write(2, "Cannot open file\n", 17);
        return -1;
    }
    while (read(0, buff, 1) > 0) {
        write(fd, buff, 1);
        write(1, buff, 1);
    }
    
    return 0;
}