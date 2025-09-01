#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("[INFO]: Ejecuntando programa como SUID\n");
    setuid(0);
    system("ls");
    return 0;
}