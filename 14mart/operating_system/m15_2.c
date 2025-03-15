#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/syscall.h>

int main() {
    char buffer[1000];
    int bytesRead;
    bytesRead = syscall(SYS_read, 0, buffer, sizeof(buffer) - 1);
    if(bytesRead == -1) {
        perror("syscall failed");
        exit(1);
    }
    buffer[bytesRead] = '\0';
    printf("You typed: %s\n", buffer);

    return 0;
}