#include <stdio.h>

int main() {
    // Date simulate pentru câteva procese care rulează
    int pids[] = {101, 1420, 2055, 3100, 412};
    char *nume[] = {"systemd", "chrome", "gcc", "htop_mini", "bash"};
    float cpu[] = {0.25f, 18.40f, 95.2f, 1.05f, 0.0f};
    int memorie[] = {124, 2048, 512, 64, 20};

    // 1. Afișarea antetului tabelului folosind alinierea (%)
    printf("==========================================================\n");
    printf("%-6s | %-12s | %10s | %10s\n", "PID", "PROCES", "CPU (%)", "MEMORIE");
    printf("==========================================================\n");

    // 2. Parcurgerea și afișarea datelor pe rânduri
    for (int i = 0; i < 5; i++) {
        // %-6d  -> PID aliniat la stânga pe 6 caractere
        // %-12s -> Numele procesului aliniat la stânga pe 12 caractere
        // %10.2f-> Valoarea CPU pe 10 caractere, aliniată la dreapta, exact 2 zecimale
        // %8d   -> Memoria aliniată la dreapta pe 8 caractere
        printf("%-6d | %-12s | %10.2f | %8d MB\n", 
               pids[i], nume[i], cpu[i], memorie[i]);
    }

    printf("==========================================================\n");
    
    // Un mic mesaj informativ la final folosind secvențe escape (\n și \t)
    printf("\n\t[Stare sistem]: Toate procesele rulează normal.\n");

    return 0;
}