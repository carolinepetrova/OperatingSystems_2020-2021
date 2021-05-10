#include <unistd.h>
#include <fcntl.h>

int main(int argc, char * argv[]) {
int fd = open(argv[1], O_RDONLY);
char buff[1000];
int bytesRead = read(fd, buff, 1000);
printf("Chars read %d \n", bytesRead);
write(1, buff, bytesRead);
return 0; 
}
