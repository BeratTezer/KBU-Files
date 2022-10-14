#include <stdio.h>

void main() { 
    float vize, final, sonuc;

    printf("Bu uygulama vize ve final notunu alarak ders durumunu rapor eder.\n");
	
    printf("Vize notunuzu giriniz > ");
    scanf("%f", &vize);
	
	printf("Final notunuzu giriniz > ");
    scanf("%f", &final);
	
	vize = vize * 0.4;
	final = final * 0.6;
	sonuc = vize + final;
	
    if ((vize+final) > 60) {
        printf("\nGeçtiniz, notunuz: %f", sonuc);
    }
    else {
        printf("\nKaldınız, notunuz: %f", sonuc);
    }
}