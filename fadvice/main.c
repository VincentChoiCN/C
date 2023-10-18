#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  int fd = open("test", O_RDWR);
  int ret = posix_fadvise(fd, 0, 10, POSIX_FADV_DONTNEED);
  printf("%d\n", ret);
  close(fd);
  return 0;
}
