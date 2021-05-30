#include  <stdio.h> 
#include  <sys/types.h>  
#include  <unistd.h> 

int main() {
int pid = fork();
if (pid ==0) {
execlp("ls", "ls", NULL);
}
printf("Hello\n");
}
