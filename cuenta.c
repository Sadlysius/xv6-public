#include "types.h"
#include "stat.h"
#include "user.h"
 
int
main(void)
{
    printf(1, "Número de procesos corriendo actualmente: %d\n", getprocs());
    exit();
}