/*
Þans Oyunu : Craps
•	Ýki zar atýlýr.
•	Zarlarýn toplam hesaplanýr.
•	Ýlk atýþta 7 veya 11 gelirse oyuncu kazanýr.
•	Ýlk atýþta 2, 3 veya 12 gelirse oyuncu kaybeder.
•	Ýlk atýþta 4, 5, 6, 8, 9 ve 10 gelirse bu oyuncunun puaný oluyor.
•	Oyuncu 7 atmadan önce kendi puanýný tutturmalýdýr.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int craps(void)
{
    int zar1 = (rand() % 6) + 1;
    int zar2 = (rand() % 6) + 1;

    printf("1. zar = %d -- 2. zar = %d\nToplam = %d\n", zar1, zar2, zar1 + zar2);

    return zar1 + zar2;
}

int main()
{
    int puan, yeniPuan;
    int skor;       
    int secim;      

    srand(time(NULL)); 

    do {
        printf("\nDevam etmek veya baþlamak için 1'e basýnýz: ");
        scanf("%d", &secim);

        puan = craps();

        if (puan == 7 || puan == 11) {
            printf("Oyunu kazandýnýz!\n");
            skor = 1;
        } 
        else if (puan == 2 || puan == 3 || puan == 12) {
            printf("Oyunu kaybettiniz!\n");
            skor = 2;
        } 
        else {
            skor = 3;
        }

      
        while (skor == 3) {
            yeniPuan = craps();

            if (yeniPuan == puan) {
                printf("Oyunu kazandýnýz!\n");
                skor = 1;
            } 
            else if (yeniPuan == 7) {
                printf("Oyunu kaybettiniz!\n");
                skor = 2;
            }
           
        }

    } while (secim == 1);

    return 0;
}















