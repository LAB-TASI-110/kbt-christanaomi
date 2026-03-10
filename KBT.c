#include <stdio.h>
#include <math.h>

float hitungBiayaTiket(int usia, float jarak) {
    float biayaDasar = 0.0;
    float hargaPerBlok = 5000.0;

    if (usia > 3) {
        int jumlahBlok = (int)ceil(jarak / 3.0);
        biayaDasar = jumlahBlok * hargaPerBlok;
    }

    return biayaDasar;
}

void tampilkanTiket(int usia, float jarak, float biayaFinal) {
    float biayaAwalUntukDisplay = biayaFinal;
    if (usia <= 3) {
        biayaAwalUntukDisplay = 0.0;
    } else {
        int jumlahBlok = (int)ceil(jarak / 3.0);
        biayaAwalUntukDisplay = jumlahBlok * 5000.0;
    }

    printf("\n");
    printf("======================================\n");
    printf("         TIKET KBT (MINI BUS)         \n");
    printf("======================================\n");
    printf("Usia Penumpang      : %d tahun\n", usia);
    printf("Jarak Tujuan        : %.2f KM\n", jarak);
    printf("--------------------------------------\n");

    if (usia > 3) {
        printf("Biaya Per Blok (3km) : Rp. %.2f\n", 5000.0);
        printf("Total Blok Jarak    : %d\n", (int)ceil(jarak / 3.0));
        printf("Biaya Awal          : Rp. %.2f\n", biayaAwalUntukDisplay);
    } else {
        printf("Anak Usia <= 3 Tahun : GRATIS\n");
    }
    
    printf("--------------------------------------\n");
    printf("TOTAL BIAYA TIKET   : Rp. %.2f\n", biayaFinal);
    printf("======================================\n");
    printf("Selamat menikmati perjalanan!\n");
    printf("======================================\n");
}

int main() {
    int usia;
    float jarak;
    float totalBiaya;

    printf("--- Sistem Ticketing KBT (Mini Bus) ---\n");
    printf("=========================================\n");

    printf("Masukkan usia penumpang (tahun)        : ");
    scanf("%d", &usia);

    printf("Masukkan jarak tujuan (KM)             : ");
    scanf("%f", &jarak);

    totalBiaya = hitungBiayaTiket(usia, jarak);

    tampilkanTiket(usia, jarak, totalBiaya);

    return 0;
}
