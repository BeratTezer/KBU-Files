#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE_OF_MAP 4

int pathExplorer(int map[][SIZE_OF_MAP], int x, int y, int signalOfSearch);

int main() {
    int i, j;
    int map[SIZE_OF_MAP][SIZE_OF_MAP]; 
    
    srand(time(NULL));
    // srand(8564456345453779);
    
    for (i=0; i<SIZE_OF_MAP; i++) {
        for (j=0; j<SIZE_OF_MAP; j++) {
            map[i][j] = rand() % 2;
        }
    }
    
    // for (i=0; i<SIZE_OF_MAP; i++) {
    //     for (j=0; j<SIZE_OF_MAP; j++) {
    //         printf("%d ", map[i][j]);
    //     }
    //     printf("\n");
    // }
    
    pathExplorer(map, 0, 0, 1);
    
    return 0;
}

int pathExplorer(int map[][SIZE_OF_MAP], int x, int y, int signalOfSearch) {
    if (map[0][0] == 0) printf("\n\nThis map unable to find any path.\n\n");
    else if (signalOfSearch == 1) {
        if (map[x][y+1] == 1 && map[x+1][y] == 1) {
            if (pathExplorer(map, x, y+1, 1) == 1) {
                printf("\n[%d][%d]", x, y+1);
                return 1;
            } else if (map[x+1][y] == 1) {
                
                if (pathExplorer(map, x+1, y, 1) == 1) {
                    printf("\n[%d][%d]", x+1, y);
                    return 1;
                }
            }
        } else if (map[x][y+1] == 1) {
            if (pathExplorer(map, x, y+1, 1) == 1) {
                printf("\n[%d][%d]", x, y+1);
                return 1;
            }
        } else if (map[x+1][y] == 1) {
            if (pathExplorer(map, x+1, y, 1) == 1) {
                printf("\n[%d][%d]", x+1, y);
                return 1;
            }
        } else if (x == SIZE_OF_MAP-1 && y == SIZE_OF_MAP-1 && map[x][y] == 1) return 1;
        else pathExplorer(map, x, y, 0);
    } else {
        if (x == SIZE_OF_MAP && y == SIZE_OF_MAP) printf("\n\nThere is no possible way to reach to there.\n\n");
        else printf("\n\nOur explorers found some ways but the paths does not last until the exit.\n\n");
    }
}