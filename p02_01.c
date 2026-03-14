#include <stdio.h>
#include <string.h>

int main() {
    char kode[4];
    char kota[20];
    char keterangan[20];
    int harga;
    float berat_butet, berat_ucok, total_berat, total_harga;
    int i;

    for(i = 1; i <= 3; i++) {
        scanf("%s", kode);
        scanf("%f", &berat_butet);

        if(strcmp(kode,"MDN") == 0) {
            strcpy(kota,"Medan");
            harga = 8000;
            strcpy(keterangan,"dalam pulau");
        }
        else if(strcmp(kode,"BLG") == 0) {
            strcpy(kota,"Balige");
            harga = 5000;
            strcpy(keterangan,"dalam pulau");
        }
        else if(strcmp(kode,"JKT") == 0) {
            strcpy(kota,"Jakarta");
            harga = 12000;
            strcpy(keterangan,"luar pulau");
        }
        else if(strcmp(kode,"SBY") == 0) {
            strcpy(kota,"Surabaya");
            harga = 13000;
            strcpy(keterangan,"luar pulau");
        }

        berat_ucok = berat_butet * 3.0 / 2.0;
        total_berat = berat_butet + berat_ucok;
        total_harga = total_berat * harga;

        if(total_berat > 10) {
            total_harga = total_harga * 0.9;
        }

        printf("===== STRUK DEL EXPRESS %d =====\n", i);
        printf("Kota tujuan %d: %s\n", i, kota);
        printf("Berat paket butet %d: %.2f kg\n", i, berat_butet);
        printf("Berat paket ucok %d: %.2f kg\n", i, berat_ucok);
        printf("Total berat %d: %.2f kg\n", i, total_berat);
        printf("Total ongkos kirim: %.0f\n", total_harga);

        printf("Informasi promo yang diperoleh: ");
        if(total_berat > 10 && strcmp(keterangan,"luar pulau") == 0) {
            printf("Diskon 10%% dan Asuransi Gratis\n");
        }
        else if(total_berat > 10) {
            printf("Diskon 10%%\n");
        }
        else if(strcmp(keterangan,"luar pulau") == 0) {
            printf("Asuransi Gratis\n");
        }
        else {
            printf("Tidak ada promo\n");
        }

        printf("\n");
    }

    return 0;
}