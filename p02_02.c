#include <stdio.h>
#include <string.h>

int main() {
    int n, i, stok[100], total = 0;
    char kategori[50];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &stok[i]);
    }

    getchar();
    fgets(kategori, sizeof(kategori), stdin);
    kategori[strcspn(kategori, "\n")] = 0;

    if(strcmp(kategori, "bahan makanan") == 0){
        for(i = 0; i < n; i += 2){
            total += stok[i];
        }
    } 
    else if(strcmp(kategori, "seragam sekolah") == 0){
        for(i = 1; i < n; i += 2){
            total += stok[i];
        }
    }

    printf("%d pcs\n", total);

    return 0;
}