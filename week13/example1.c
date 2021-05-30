#include  <stdio.h> 
#include  <sys/types.h>  
#include  <unistd.h>  
int main() { 
	printf("Hello there!");
	fork(); 
	printf("Called fork()");  
	return  0; 
}
