#include <stdio.h>

void treePrinter(int tour, int leaf);

int main() {
    treePrinter(1, 0);
    return 0;
}

void treePrinter(int tour, int leaf) {
    if (tour < 12) {
        for (int i = 0; i<=(9-leaf)/2; i++) {
            printf(" ");
        }
        if (tour < 9) {
            for (int i = 0; i<=leaf; i++) {
                printf("*");
            }
        } else {
            printf("|");
            leaf -= 2;
        }
        printf("\n");
        if (tour == 3) treePrinter(++tour, 0);
        else if (tour == 8) treePrinter(++tour, 0);
        else treePrinter(++tour, leaf + 2);
    }
}