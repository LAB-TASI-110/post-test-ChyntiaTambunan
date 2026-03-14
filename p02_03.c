#include <stdio.h>
#include <string.h>

int main() {

    // daftar makanan
    char makanan[10][30] = {
        "roti isi ayam","risol","pkl","sosis","piscok",
        "donat","tempe","tahu","bakwan","kentang"
    };

    int harga_makanan[10] = {
        15000,10000,10000,15000,10000,
        10000,10000,10000,10000,15000
    };

    // daftar minuman
    char minuman[5][30] = {
        "chocolatos","teh tarik","capucino","kopi hitam","sogem"
    };

    int harga_minuman[5] = {8000,8000,8000,5000,8000};

    // penyimpanan struk
    char nama_beli[50][30];
    int jumlah_beli[50];
    int harga_satuan[50];
    int total_per_item[50];

    int total_semua = 0;
    int index = 0;

    char pilihan;
    int jenis, jumlah;
    char nama[30];
    int i,j;

    printf("Beli makanan (m) atau minuman (d)? : ");
    scanf(" %c", &pilihan);

    // ------------------- MAKANAN -------------------
    if(pilihan == 'm'){
        printf("Berapa jenis makanan yang dibeli: ");
        scanf("%d",&jenis);

        for(i=0;i<jenis;i++){
            printf("Nama makanan: ");
            scanf(" %[^\n]", nama);

            printf("Jumlah: ");
            scanf("%d",&jumlah);

            for(j=0;j<10;j++){
                if(strcmp(nama,makanan[j])==0){

                    strcpy(nama_beli[index], nama);
                    jumlah_beli[index] = jumlah;
                    harga_satuan[index] = harga_makanan[j];
                    total_per_item[index] = jumlah * harga_makanan[j];

                    total_semua += total_per_item[index];
                    index++;
                }
            }
        }

        printf("Apakah ingin membeli minuman? (y/n): ");
        scanf(" %c",&pilihan);

        if(pilihan=='y'){
            printf("Berapa jenis minuman: ");
            scanf("%d",&jenis);

            for(i=0;i<jenis;i++){
                printf("Nama minuman: ");
                scanf(" %[^\n]", nama);

                printf("Jumlah: ");
                scanf("%d",&jumlah);

                for(j=0;j<5;j++){
                    if(strcmp(nama,minuman[j])==0){

                        strcpy(nama_beli[index], nama);
                        jumlah_beli[index] = jumlah;
                        harga_satuan[index] = harga_minuman[j];
                        total_per_item[index] = jumlah * harga_minuman[j];

                        total_semua += total_per_item[index];
                        index++;
                    }
                }
            }
        }
    }

    // ------------------- MINUMAN -------------------
    else if(pilihan == 'd'){

        printf("Berapa jenis minuman: ");
        scanf("%d",&jenis);

        for(i=0;i<jenis;i++){
            printf("Nama minuman: ");
            scanf(" %[^\n]", nama);

            printf("Jumlah: ");
            scanf("%d",&jumlah);

            for(j=0;j<5;j++){
                if(strcmp(nama,minuman[j])==0){

                    strcpy(nama_beli[index], nama);
                    jumlah_beli[index] = jumlah;
                    harga_satuan[index] = harga_minuman[j];
                    total_per_item[index] = jumlah * harga_minuman[j];

                    total_semua += total_per_item[index];
                    index++;
                }
            }
        }

        printf("Apakah ingin membeli makanan? (y/n): ");
        scanf(" %c",&pilihan);

        if(pilihan=='y'){

            printf("Berapa jenis makanan: ");
            scanf("%d",&jenis);

            for(i=0;i<jenis;i++){
                printf("Nama makanan: ");
                scanf(" %[^\n]", nama);

                printf("Jumlah: ");
                scanf("%d",&jumlah);

                for(j=0;j<10;j++){
                    if(strcmp(nama,makanan[j])==0){

                        strcpy(nama_beli[index], nama);
                        jumlah_beli[index] = jumlah;
                        harga_satuan[index] = harga_makanan[j];
                        total_per_item[index] = jumlah * harga_makanan[j];

                        total_semua += total_per_item[index];
                        index++;
                    }
                }
            }
        }
    }

    // ------------------- STRUK -------------------

    printf("\n");
    printf("===============================================\n");
    printf("           STRUK CAFETARIA IT DEL              \n");
    printf("===============================================\n");

    printf("%-20s %-8s %-12s %-12s\n","Nama","Jumlah","Harga","Total");
    printf("------------------------------------------------\n");

    for(i=0;i<index;i++){
        printf("%-20s %-8d %-12d %-12d\n",
               nama_beli[i],
               jumlah_beli[i],
               harga_satuan[i],
               total_per_item[i]);
    }

    printf("------------------------------------------------\n");
    printf("%-30s : %d\n","TOTAL BAYAR", total_semua);
    printf("===============================================\n");

    return 0;
}