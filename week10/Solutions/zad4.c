#include <fcntl.h>
#include <unistd.h>
int main(int argc, char * argv[]) {
int m, n;
sscanf(argv[1], "%d", &m);
sscanf(argv[2], "%d", &n);
int fd = open(argv[3], O_RDONLY);
lseek(fd,m-1,SEEK_SET);
char buff[1000];
int size = read(fd, buff, n-m+1);
write(1, buff, size);
return 0;
}
