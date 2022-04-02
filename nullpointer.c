#include "syscall.h"
#include "types.h"
#include "user.h"
#include "stat.h"

#define NULL 0
#define stdout 1
int main(int argc, char *argv[])
{
    printf(stdout, "This is a test for NULL pointer deference \n");
    int *p = 0;
    printf(1, "*p: %d \n", *p);
    exit();
}