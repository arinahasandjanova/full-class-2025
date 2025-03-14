#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
extern int errno;

int main(void) {
    /*int fd = open("foo.txt", O_RDONLY | O_CREAT);
    printf("fd = %d\n", fd);
    if(fd == -1) {
        printf("Error number %d\n", errno);
        perror("Program");
    }*/
    /*int fd1 = open("foo.txt", O_RDONLY);
    if(fd1 < 0) {
        perror("c1");
        exit(1);
    }
    printf("Opened the fd = %d\n", fd1);
    if(close(fd1) < 0) {
        perror("c1");
        exit(1);
    }
    printf("Closed the file\n");*/

    int fd, sz;
    char* c = (char*)calloc(100, sizeof(char));
    fd = open("foo.txt", O_RDONLY);
    if(fd < 0) {
        perror("r1");
        exit(1);
    }
    sz = read(fd, c, 100);
    printf("called read (%d, c, 10); returned that %d bytes were read\n", fd, sz);
    c[sz]='\0';
    printf("Those bytes are '%s'\n", c);

    return 0;
}
