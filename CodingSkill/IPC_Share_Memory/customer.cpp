#include <cstdio>
#include <cstdlib>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>

int main()
{
    const int SIZE = 4096;
    const char* name = "OS";
    
    int fd = shm_open(name, O_RDONLY, 0666);
    char*ptr = (char*)mmap(0, SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    
    printf("%s", (char*)ptr);
    
    /*remove the shared memory objects*/
    shm_unlink(name); 
    return 0;
}
