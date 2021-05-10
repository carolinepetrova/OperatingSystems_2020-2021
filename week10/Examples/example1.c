#include<stdio.h>
int main() {
int fd = creat("file2.txt",0644);
if (fd == -1) {
printf("Can't create file");
return (-1);
return 0;
}
}
