#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("=== Sistema de backup privilegiado ===\n");
    printf("Ejecutando como UID: %d\n", getuid());
    printf("Ejecutando como EUID: %d\n", geteuid());

    printf("Iniciando el proceso de backup... \n");
    setuid(0);

    // VULNERABLE: NO usa ruta específica
    system("whoami");
    // system("id");
    // system("ls -la /root 2>/dev/null || echo 'NO se peude acceder a /root'");

    printf("Backup completado.\n");
    return 0;
}