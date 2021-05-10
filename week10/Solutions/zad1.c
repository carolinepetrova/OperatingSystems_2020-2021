#include <unistd.h>

int main() {
char buff[1];

while (read(0, buff, 1) > 0) {
write(1, buff, 1);
}
return 0;
}
