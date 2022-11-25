#include "types.h"
#include "stat.h"
#include "user.h"
 
int main(void)
{
    char test;
    char *virtual_address = &test;
    printf(1, "\n dirección virtual a traducir: %p\n", virtual_address);
    getphysaddr(virtual_address);
    exit();
}