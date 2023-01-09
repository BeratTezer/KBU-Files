#include <stdio.h>
#include <stdlib.h> // rand()

int main() {
    // Kullanicidan alinacak degiskenlerin ve dongu elemanlarinin tanimlanması
    int M, N, i, j, result=0;
    
    // Kullanicidan degiskenlerin alinmasi
    printf("Olusturulacak matrisin satir sayisini giriniz: ");
    scanf("%d", &M);
    printf("Olusturulacak matrisin sutun sayisini giriniz: ");
    scanf("%d", &N);
    
    // Bu degiskenlerin kullanilmasi ile matrislerin tanimlanması
    int randomMatris[M-1][N-1], controlMatris[3][3], resultMatris[M-1][N-1];
    
    // Matrisi 0-255 arasindaki rastgele degerler ile doldurma
    for (i = 0 ; i <= M-1 ; i++) {
        for (j = 0 ; j <= N-1 ; j++) {
            randomMatris[i][j] = rand() % 256;
            resultMatris[i][j]=0;
        }
    }
    
    // Kontrol matrisini olusturma
    for (i = 0 ; i <= 2 ; i++) {
        for (j = 0 ; j <= 2 ; j++) {
            printf("\nKontrolMatrisi [%d][%d]. eleman: ", i+1,j+1);
            scanf("%d", &controlMatris[i][j]);
        }
    }
    
    // Kontrol matrisi ile filtreleme
    for (i = 0 ; i <= M-1 ; i++) {
        for (j = 0 ; j <= N-1 ; j++) {
            if (i+2 <= M-1 && j+2 <= N-1) {
                resultMatris[i+1][j+1] = randomMatris[i][j] * controlMatris[0][0] + randomMatris[i][j+1] * controlMatris[0][1] + randomMatris[i][j+2] * controlMatris[0][2] + randomMatris[i+1][j] * controlMatris[1][0] + randomMatris[i+1][j+1] * controlMatris[1][1] + randomMatris[i+1][j+2] * controlMatris[1][2] + randomMatris[i+2][j] * controlMatris[2][0] + randomMatris[i+2][j+1] * controlMatris[2][1] + randomMatris[i+2][j+2] * controlMatris[2][2];
            }
        }
    }
    
    for (i = 0 ; i <= M-1 ; i++) {
        for (j = 0 ; j <= N-1 ; j++) {
            printf("%d ", resultMatris[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}